//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, WQImagePickerController;

@protocol WQImagePickerDelegate <NSObject>

@optional
- (void)imagePickerControllerDidCancel:(WQImagePickerController *)arg1;
- (void)imagePickerController:(WQImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
@end

