//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EffectItemViewDelegate.h"
#import "MTSaveViewControllerDelegate.h"

@class EffectView, MBProgressHUD, MTFilterControl, NSCondition, NSMutableDictionary, ShowImageScrollView, UIButton, UIImage;

__attribute__((visibility("hidden")))
@interface CamAfterViewController : UIViewController <MTSaveViewControllerDelegate, EffectItemViewDelegate>
{
    EffectView *effectView;
    ShowImageScrollView *imageView;
    UIButton *effectBtn;
    BOOL _isViewDidLoad;
    BOOL _isEffectViewShowed;
    BOOL _isImageSaved;
    MBProgressHUD *_hud;
    NSCondition *_saveCondition;
    int _currentFilterIndex;
    MTFilterControl *_filterControl;
    UIImage *_image;
    NSMutableDictionary *_exifDict;
}

@property(retain, nonatomic) NSMutableDictionary *exifDict; // @synthesize exifDict=_exifDict;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)saveCurrentResultImageToAlbum:(BOOL)arg1;
- (void)effectItemViewWasTapped:(id)arg1;
- (int)realEffectClickCount:(int)arg1;
- (void)setEffectViewShow:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideEffectView;
- (void)showEffectView;
- (void)setCaptureOrientation:(int)arg1;
- (void)setFilterIndex:(int)arg1;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)switchEffectView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 filterIndex:(int)arg2;

@end

