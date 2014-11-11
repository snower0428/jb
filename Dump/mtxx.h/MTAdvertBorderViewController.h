//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTSingleImagePickerControllerDelegate.h"
#import "ShareViewControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class BeautyMaterialTool, MTBeautyBorderMaterial, NSString, ShowImageScrollView, UIImage;

__attribute__((visibility("hidden")))
@interface MTAdvertBorderViewController : UIViewController <MTSingleImagePickerControllerDelegate, ShareViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    ShowImageScrollView *imageScrollView;
    BeautyMaterialTool *_materialTool;
    BOOL _firstTimeOpenPhotoLibrary;
    NSString *_advertId;
    NSString *_shareTopicText;
    NSString *_shareButtonText;
    MTBeautyBorderMaterial *_borderMaterial;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) MTBeautyBorderMaterial *borderMaterial; // @synthesize borderMaterial=_borderMaterial;
@property(copy, nonatomic) NSString *shareButtonText; // @synthesize shareButtonText=_shareButtonText;
@property(copy, nonatomic) NSString *shareTopicText; // @synthesize shareTopicText=_shareTopicText;
@property(copy, nonatomic) NSString *advertId; // @synthesize advertId=_advertId;
- (void).cxx_destruct;
- (void)shareSuccessWithUserId:(id)arg1 postId:(id)arg2;
- (void)actionShare:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)didTouchPickingImageFromCameraButtonWithImagePicker:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithBroderMaterialId:(int)arg1;
- (id)initWithBroderMaterial:(id)arg1;

@end

