//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTPushAndUpdateDeleage.h"
#import "MTWebViewControllerDelegate.h"
#import "MTWelcomeViewControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class HomeBlockButton, MTHomeAdvertButton, MTMiniWebAppButton, MTWelcomeViewController, QualityViewController, UIButton, UIImageView, UILabel, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface HomeViewController : UIViewController <UIScrollViewDelegate, MTPushAndUpdateDeleage, MTWebViewControllerDelegate, UINavigationControllerDelegate, MTWelcomeViewControllerDelegate, SKStoreProductViewControllerDelegate>
{
    BOOL _isDefaultViewShowed;
    BOOL _isVersionNewFeaturesShowing;
    QualityViewController *_recommendViewController;
    MTWelcomeViewController *_VersionNewFeatures;
    UIScrollView *_functionContainer;
    UIImageView *_rightArrowHighlight;
    UIImageView *_channel91ImageView;
    UIButton *_rightArrowImageView;
    UIButton *_leftArrowImageView;
    UIPageControl *_smPageControl;
    UIImageView *_versionNewFlag;
    UIImageView *_recommendImageView;
    UILabel *_recommendLabel;
    UILabel *_versionLabel;
    MTHomeAdvertButton *_advertButton;
    MTHomeAdvertButton *_kouDaiButton;
    MTHomeAdvertButton *_shoperButton;
    MTHomeAdvertButton *_meipaiButton;
    HomeBlockButton *_assetsButton;
    MTMiniWebAppButton *_appButton;
}

@property(nonatomic) __weak MTMiniWebAppButton *appButton; // @synthesize appButton=_appButton;
@property(nonatomic) __weak HomeBlockButton *assetsButton; // @synthesize assetsButton=_assetsButton;
@property(nonatomic) __weak MTHomeAdvertButton *meipaiButton; // @synthesize meipaiButton=_meipaiButton;
@property(nonatomic) __weak MTHomeAdvertButton *shoperButton; // @synthesize shoperButton=_shoperButton;
@property(nonatomic) __weak MTHomeAdvertButton *kouDaiButton; // @synthesize kouDaiButton=_kouDaiButton;
@property(nonatomic) __weak MTHomeAdvertButton *advertButton; // @synthesize advertButton=_advertButton;
@property(nonatomic) __weak UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(nonatomic) __weak UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(nonatomic) __weak UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
@property(nonatomic) __weak UIImageView *versionNewFlag; // @synthesize versionNewFlag=_versionNewFlag;
@property(nonatomic) __weak UIPageControl *smPageControl; // @synthesize smPageControl=_smPageControl;
@property(nonatomic) __weak UIButton *leftArrowImageView; // @synthesize leftArrowImageView=_leftArrowImageView;
@property(nonatomic) __weak UIButton *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(nonatomic) __weak UIImageView *channel91ImageView; // @synthesize channel91ImageView=_channel91ImageView;
@property(nonatomic) __weak UIImageView *rightArrowHighlight; // @synthesize rightArrowHighlight=_rightArrowHighlight;
@property(nonatomic) __weak UIScrollView *functionContainer; // @synthesize functionContainer=_functionContainer;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)openAppInStoreWithAppId:(id)arg1;
- (void)setSecondPageNeedShow:(BOOL)arg1;
- (BOOL)isSecondPageNeedShow;
- (void)adjustArrowState;
- (void)actionPageChange:(id)arg1;
- (void)actionRight:(id)arg1;
- (void)actionLeft:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)rightArrowHighlightAnimation;
- (void)pushAndUpdateControllerCheckNoInfo;
- (void)showVersionUpdateInfo:(id)arg1;
- (void)showInternalPushInfo;
- (BOOL)showVersionNewFeatures;
- (BOOL)isViewTopInKeyWindow;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)didTouchCloseButtonWithViewController:(id)arg1;
- (void)openUrlWithMTWebViewController:(id)arg1;
- (void)checkInternelPushAndVersionUpdate;
- (void)checkNewVersionFinished;
- (void)scrollToFirstScreen;
- (void)isMTDefaultViewHideAnimationFinished;
- (void)showNewFeaturesFinished:(id)arg1;
- (id)adViewControllerWithInfo:(id)arg1;
- (void)refreshAds;
- (void)actionRecommend:(id)arg1;
- (id)recommendViewController;
- (void)actionIShopping2:(id)arg1;
- (void)actionShoper:(id)arg1;
- (void)actionAdvertisement:(id)arg1;
- (void)actionSetting:(id)arg1;
- (void)actionMeiPai:(id)arg1;
- (void)action9Cut:(id)arg1;
- (void)actionApp:(id)arg1;
- (void)actionAssetsCenter:(id)arg1;
- (void)actionEffectCamera:(id)arg1;
- (void)actionPuzzle:(id)arg1;
- (void)actionCosmesis:(id)arg1;
- (void)actionBeautify:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

