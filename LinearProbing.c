#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20

struct Man{
    char name[20];
        int leg;
    double rating;
     //Man(){};
     Man(char n[],int l,double r){
        strcpy(name,n);
        leg = l;
        rating =r;
    }

};

struct DataItem {
    int key;
    struct Man man;

};

struct DataItem* dataList[SIZE];
struct DataItem* singleItem;
struct DataItem* item;

int getHashCode(int key) {
    return key%SIZE;
}

struct DataItem *search(int key) {
    //get the hash
    int hashIndex = getHashCode(key);
    //move in array until an empty
    while(dataList[hashIndex]!=NULL) {
        if(dataList[hashIndex]->key==key)
            return dataList[hashIndex];
        //go to next cell
        ++hashIndex;
        //wrap around the table
        hashIndex %= SIZE;
    }
    return NULL;
};

void insert(int key,struct man) {
    struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
    item->man=man;
    item->key = key;

    //get the hash
    int hashIndex = getHashCode(key);

    //move in array until an empty or deleted cell
    while(dataList[hashIndex] != NULL && dataList[hashIndex]->key != -1) {
        //goto next call
        ++hashIndex;

        //wrap around the table
        hashIndex %= SIZE;
    }
    dataList[hashIndex] = item;
}

struct DataItem* del(struct DataItem* item) {
    int key = item->key;

    //get the hash
    int hashIndex = getHashCode(key);

    //move in array until an empty
    while(dataList[hashIndex] != NULL) {
        if(dataList[hashIndex]->key ==key) {
            struct DataItem* temp = dataList[hashIndex];

            //assign a dummy item at deleted position
            dataList[hashIndex] = singleItem;
            return temp;
        }
        //go to next cell
        ++hashIndex;
        //wrap around the table
        hashIndex %= SIZE;
    }
    return NULL;
};

void display() {
    int i=0;
    for(i=0;i<SIZE;++i) {
        if(dataList[i] != NULL)
            printf(" (key : %d,  data :%s,%d,%lf)",dataList[i]->key,dataList[i]->man.name,dataList[i]->man.leg,dataList[i]->man.rating);
        else printf("--");
    }
    printf("\n");
}

int main() {
    singleItem = (struct DataItem*) malloc(sizeof(struct DataItem*));
    singleItem->data = -1;
    singleItem->key = -1;

    insert(1,Man("anik",2,1.5));
//    insert(2,70);
//    insert(42,80);
//    insert(4,25);
//    insert(10,44);
//    insert(14,32);
//    insert(17,11);
//    insert(20,78);
//    insert(37,97);
//    insert(37,53);

    display();
    item = search(1);
    if(item!= NULL) {
        printf("Element found: key :%d data :%s,%d,%lf\n",item->key,item->man.name,item->man.leg,item->man.rating);
    } else {
        printf("Element not found\n");
    }

}
