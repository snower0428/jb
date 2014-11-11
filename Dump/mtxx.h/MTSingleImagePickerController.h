//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImagePickerController.h"

#import "MTSingleImagePickerControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

__attribute__((visibility("hidden")))
@interface MTSingleImagePickerController : UIImagePickerController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, MTSingleImagePickerControllerDelegate>
{
    id <UINavigationControllerDelegate><UIImagePickerControllerDelegate> _externalDelegate;
    BOOL _showHomeBarButtonItem;
    BOOL _showBackBarButtonItem;
    BOOL _bNeedRightTakePhotoButton;
    id <MTSingleImagePickerControllerDelegate> _singleImagePickerdelegate;
}

@property(nonatomic) BOOL bNeedRightTakePhotoButton; // @synthesize bNeedRightTakePhotoButton=_bNeedRightTakePhotoButton;
@property(nonatomic) __weak id <MTSingleImagePickerControllerDelegate> singleImagePickerdelegate; // @synthesize singleImagePickerdelegate=_singleImagePickerdelegate;
@property(nonatomic) BOOL showBackBarButtonItem; // @synthesize showBackBarButtonItem=_showBackBarButtonItem;
@property(nonatomic) BOOL showHomeBarButtonItem; // @synthesize showHomeBarButtonItem=_showHomeBarButtonItem;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)actionPhotograph;
- (void)actionCancel:(id)arg1;
- (void)actionHome:(id)arg1;
- (void)back:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

