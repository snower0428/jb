//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTShape : NSObject
{
}

- (void)addInverseToPath:(struct CGRect)arg1;
- (void)addToPath:(struct CGRect)arg1;
- (void)addLeftEdgeToPath:(struct CGRect)arg1 lightSource:(int)arg2;
- (void)addBottomEdgeToPath:(struct CGRect)arg1 lightSource:(int)arg2;
- (void)addRightEdgeToPath:(struct CGRect)arg1 lightSource:(int)arg2;
- (void)addTopEdgeToPath:(struct CGRect)arg1 lightSource:(int)arg2;
- (struct UIEdgeInsets)insetsForSize:(struct CGSize)arg1;
- (void)closePath:(struct CGRect)arg1;
- (void)openPath:(struct CGRect)arg1;

@end

