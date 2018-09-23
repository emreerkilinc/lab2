//
//  Box.m
//  lab2
//
//  Created by emre on 2018-09-23.
//  Copyright © 2018 emre. All rights reserved.
//
#import "Box.h"

@implementation Box

- (instancetype) initWithWidth: (float) width andHeight: (float) height andLength: (float) length;
{
    self = [super init];
    if(self) {
        _width= width;
        _height = height;
        _length = length;
    }
    return self;
}
- (float) volume {
    return _width * _height* _length;
}

-(float) insideBox: (float)  bBox andBox2: (float) sBox
{
    return  bBox / sBox;
}
@end
