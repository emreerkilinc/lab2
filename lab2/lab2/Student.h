//
//  Student.h
//  lab2
//
//  Created by emre on 2018-09-23.
//  Copyright © 2018 emre. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Student : NSObject
// define public properties
// define public methods

-  (instancetype)initWithId: (int) identification andName: (NSString *) name andCountry: (NSString *) country ;

@property (nonatomic, assign) int identification;
@property(nonatomic, strong) NSString *name;
@property(nonatomic,strong) NSString *country;


@end
