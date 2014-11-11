//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface MTMaterialPreview : UIView
{
    UIView *_previewContainerView;
    UIView *_converView;
    UIImageView *_advertImageView;
    UIImageView *_materialPreview;
    UIActivityIndicatorView *_advertIndicatorView;
    UIButton *_downloadButton;
    UIButton *_advertButton;
    CDUnknownBlockType _downloadPressCalback;
    CDUnknownBlockType _advertPressCalback;
}

+ (void)showWithAdUrl:(id)arg1 materialDetail:(id)arg2 downloadPressCalback:(CDUnknownBlockType)arg3 advertPressCalback:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType advertPressCalback; // @synthesize advertPressCalback=_advertPressCalback;
@property(copy, nonatomic) CDUnknownBlockType downloadPressCalback; // @synthesize downloadPressCalback=_downloadPressCalback;
@property(retain, nonatomic) UIButton *advertButton; // @synthesize advertButton=_advertButton;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UIActivityIndicatorView *advertIndicatorView; // @synthesize advertIndicatorView=_advertIndicatorView;
@property(retain, nonatomic) UIImageView *materialPreview; // @synthesize materialPreview=_materialPreview;
@property(retain, nonatomic) UIImageView *advertImageView; // @synthesize advertImageView=_advertImageView;
@property(retain, nonatomic) UIView *converView; // @synthesize converView=_converView;
@property(retain, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
- (void).cxx_destruct;
- (void)dismissToBottom:(BOOL)arg1;
- (void)actionClose:(id)arg1;
- (void)actionAdvert:(id)arg1;
- (void)actionDownload:(id)arg1;
- (void)gestureRecognizerDidPan:(id)arg1;
- (void)show;

@end

