//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVCSettingBase.h"

#import "UISettingWidgetViewDelegate.h"

@class UIImageView, UISettingWidgetView;

__attribute__((visibility("hidden")))
@interface UIVCSettingWidgetPreview : UIVCSettingBase <UISettingWidgetViewDelegate>
{
    UISettingWidgetView *footerView;
    UIImageView *widgetPreView;
}

- (BOOL)showMessageButton;
- (id)getFootViewButtonName;
- (id)getFootViewTip;
- (void)NDAWWidgetButtonClick:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)widgetPrevButtonPress:(id)arg1;
- (void)previewReturnPress;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)returnButton:(id)arg1;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupBackground;
- (void)dealloc;
- (void)loadView;
- (id)CreateTableViewFooter;
- (void)setupPrototypes;

@end

