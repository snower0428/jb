//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCropperViewControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString;

@interface IGLegacyLibraryPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, IGCropperViewControllerDelegate>
{
    BOOL _dismissAnimated;
    BOOL _isCircularCropMode;
    int _minimumImageSize;
    int _mediaType;
    CDUnknownBlockType _mediaCompletionHandler;
    CDUnknownBlockType _videoCompletionHandler;
}

+ (int)statusBarStyle;
+ (void)pickMediaOfType:(int)arg1 minimumSize:(int)arg2 withViewController:(id)arg3 animated:(BOOL)arg4 circularCropMode:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType videoCompletionHandler; // @synthesize videoCompletionHandler=_videoCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType mediaCompletionHandler; // @synthesize mediaCompletionHandler=_mediaCompletionHandler;
@property(nonatomic) BOOL isCircularCropMode; // @synthesize isCircularCropMode=_isCircularCropMode;
@property(nonatomic) BOOL dismissAnimated; // @synthesize dismissAnimated=_dismissAnimated;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) int minimumImageSize; // @synthesize minimumImageSize=_minimumImageSize;
- (void).cxx_destruct;
- (void)cropperViewControllerDidFinish:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

