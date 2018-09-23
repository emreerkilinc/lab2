//
//  Box.h
//  lab2
//
//  Created by emre on 2018-09-23.
//  Copyright © 2018 emre. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface Box : NSObject

@property (nonatomic, assign) float width;
@property (nonatomic, assign) float height;
@property (nonatomic, assign) float length;

- (instancetype) initWithWidth: (float) width andHeight: (float) height andLength: (float) length;

- (float) volume;

-(float) insideBox: (float)  bBox andBox2: (float) sBox;
@end
