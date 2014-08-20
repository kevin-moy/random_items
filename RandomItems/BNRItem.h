//
//  BNRItem.h
//  RandomItems
//
//  Created by Kevin Moy on 8/13/14.
//  Copyright (c) 2014 Kevin Moy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString *_itemName;
    NSString *_serialNumber;
    int _valueInDollars;
    NSDate *_dateCreated;
}

+ (instancetype)randomItem;

// Designated initalizer for BNRItem
- (instancetype)initWithItemName:(NSString *)name
                  valueInDollars:(int)value
                    serialNumber:(NSString *)sNumber;


- (instancetype)initWithItemName:(NSString *)name;

//- (instancetype)initWithItemName:(NSString *)name
 //                   serialNumber:(NSString *)sNumber;

- (void)setItemName:(NSString *)str; //Setter
- (NSString *)itemName;  //Getter

- (void)setSerialNumber:(NSString *)str;
- (NSString *)serialNumber;

- (void)setValueInDollars:(int)v;
- (int)valueInDollars;
// Getter
- (NSDate *)dateCreated;
@end