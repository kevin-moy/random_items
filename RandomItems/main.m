//
//  main.m
//  RandomItems
//
//  Created by Kevin Moy on 8/13/14.
//  Copyright (c) 2014 Kevin Moy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRItem.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // Create mutable array object, store address in items variable
        NSMutableArray *items = [[NSMutableArray alloc] init];
       
        for (int i = 0; i < 10; i++) {
            BNRItem *item = [BNRItem randomItem];
            [items addObject:item];
        }
        
        for (BNRItem *item in items)
        {
            NSLog(@"%@", item);
        }
               // Destroy object
        items = nil;
    }
    return 0;
}

