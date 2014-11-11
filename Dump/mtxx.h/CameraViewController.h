//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EffectItemViewDelegate.h"
#import "FocusTouchViewDelegate.h"
#import "MBProgressHUDDelegate.h"
#import "VolumeKeyListenerDelegate.h"
#import "ZoomBarViewDelegate.h"

@class EffectView, FlashStateControl, FocusTouchView, GPUImageView, MBProgressHUD, MTFilterControl, MTStillCamera, UIButton, UIImageView, UILabel, UIView, VolumeKeyListener, ZoomBarView;

__attribute__((visibility("hidden")))
@interface CameraViewController : UIViewController <EffectItemViewDelegate, FocusTouchViewDelegate, ZoomBarViewDelegate, MBProgressHUDDelegate, VolumeKeyListenerDelegate>
{
    UIButton *flipBtn;
    UIImageView *mainBtnIcon;
    UILabel *currentEffectLabel;
    FlashStateControl *flashStateControl;
    UIView *bottomBar;
    EffectView *effectView;
    UIView *captureView;
    ZoomBarView *zoomBarView;
    FocusTouchView *focusTouchView;
    BOOL bEffectHide;
    BOOL _isCapturing;
    float _fZoom;
    int _currentFilterIndex;
    int currentOrientation;
    MBProgressHUD *hud;
    MTStillCamera *_stillCamera;
    GPUImageView *_filteredVideoView;
    MTFilterControl *_filterControl;
    VolumeKeyListener *_volumeListener;
    UIImageView *_upImageView;
    UIImageView *_downImageView;
    id _resignActiveNotification;
    id _didBecomeActiveNotification;
    UIButton *_filterButton;
}

+ (void)checkCameraAuthorization:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak UIButton *filterButton; // @synthesize filterButton=_filterButton;
- (void).cxx_destruct;
- (void)hudWasHidden:(id)arg1;
- (void)rotationIconWith:(float)arg1;
- (void)updateRotation;
- (void)hasListenerVolumeChanged;
- (void)focusTouchView:(id)arg1 focusAt:(struct CGPoint)arg2;
- (void)zoomBarView:(id)arg1 ValueChanged:(float)arg2;
- (void)effectItemViewWasTapped:(id)arg1;
- (void)setHideEffectView:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isSupportFrontAVCapture;
- (void)showZoomView:(id)arg1;
- (void)showEffectView:(id)arg1;
- (void)flipCamera:(id)arg1;
- (int)getUIImageOrientationFromUIDeviceOrientation;
- (void)take:(id)arg1;
- (void)back:(id)arg1;
- (void)openCameraAnimation;
- (void)addCameraMaskImageView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end
