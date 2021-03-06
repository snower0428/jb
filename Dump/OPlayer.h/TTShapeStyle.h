//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyle.h"

@class TTShape;

@interface TTShapeStyle : TTStyle
{
    TTShape *_shape;
}

+ (id)styleWithShape:(id)arg1 next:(id)arg2;
@property(retain, nonatomic) TTShape *shape; // @synthesize shape=_shape;
- (struct CGSize)addToSize:(struct CGSize)arg1 context:(id)arg2;
- (struct UIEdgeInsets)addToInsets:(struct UIEdgeInsets)arg1 forSize:(struct CGSize)arg2;
- (void)draw:(id)arg1;
- (void)dealloc;

@end

