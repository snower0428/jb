//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMPCardCell;

@protocol CardDelegate <NSObject>

@optional
- (void)textFieldDidChange:(MMPCardCell *)arg1;
- (void)textFieldFindNextFouce:(MMPCardCell *)arg1;
- (void)textFieldDidEdit:(MMPCardCell *)arg1;
- (void)onSafeClick:(MMPCardCell *)arg1;
- (void)onCameraClick:(MMPCardCell *)arg1;
@end
