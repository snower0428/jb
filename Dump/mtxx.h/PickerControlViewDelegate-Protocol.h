//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PickerControlView;

@protocol PickerControlViewDelegate <NSObject>
- (void)pickerControlView:(PickerControlView *)arg1 deleteImageAtIndex:(unsigned int)arg2;
- (void)startPuzzleWithPickerControlView:(PickerControlView *)arg1;
- (NSString *)pickerControlViewImageCountLabelText;
@end
