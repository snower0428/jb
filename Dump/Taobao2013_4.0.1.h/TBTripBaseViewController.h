//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UIFont, UILabel, UITextField, UIView;

@interface TBTripBaseViewController : UIViewController
{
    NSString *footTitle;
    NSString *headTitle;
    NSString *flightNumTitle;
    NSString *flightTimeTitle;
    int leftButtonType;
    int rightButtonType;
    int middleRightButtonType;
    SEL footButtonClickSelector;
    SEL rightButtonClickSelector;
    SEL middleRightButtonClickSelector;
    SEL leftButtonClickSelector;
    BOOL isMiddleRightButtonExist;
    BOOL isRightButtonExist;
    BOOL isflightListPage;
    int footBtnType;
    UIButton *topRightButton;
    UITextField *currentTextField__;
    UIFont *headerFont;
    UILabel *labelTime;
    UIView *bakView;
    BOOL isFootGreenButton;
}

@property(retain, nonatomic) NSString *flightTimeTitle; // @synthesize flightTimeTitle;
@property(retain, nonatomic) NSString *flightNumTitle; // @synthesize flightNumTitle;
@property(nonatomic) BOOL isflightListPage; // @synthesize isflightListPage;
@property(retain, nonatomic) UIFont *headerFont; // @synthesize headerFont;
@property(nonatomic) SEL leftButtonClickSelector; // @synthesize leftButtonClickSelector;
@property(nonatomic) int footBtnType; // @synthesize footBtnType;
@property(nonatomic) BOOL isFootGreenButton; // @synthesize isFootGreenButton;
@property(nonatomic) int middleRightButtonType; // @synthesize middleRightButtonType;
@property(nonatomic) int rightButtonType; // @synthesize rightButtonType;
@property(nonatomic) SEL middleRightButtonClickSelector; // @synthesize middleRightButtonClickSelector;
@property(nonatomic) SEL rightButtonClickSelector; // @synthesize rightButtonClickSelector;
@property(nonatomic) BOOL isRightButtonExist; // @synthesize isRightButtonExist;
@property(nonatomic) BOOL isMiddleRightButtonExist; // @synthesize isMiddleRightButtonExist;
@property(nonatomic) SEL footButtonClickSelector; // @synthesize footButtonClickSelector;
@property(retain, nonatomic) NSString *footTitle; // @synthesize footTitle;
@property(nonatomic) int leftButtonType; // @synthesize leftButtonType;
@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle;
- (void).cxx_destruct;
- (void)requestNoNetworkError;
- (void)requestErrorDic:(id)arg1;
- (void)requestError:(id)arg1;
- (void)addTitleView:(id)arg1;
- (void)forceCloseKeyboard:(id)arg1;
- (void)getReadyForceClosingKeyboard:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)btnWithFrame:(struct CGRect)arg1;
- (id)lineWithFrame:(struct CGRect)arg1;
- (void)loadLineView;
- (void)loadHeadView;
- (void)updateRightButton;
- (id)loadFootView;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popBack:(id)arg1;
- (void)backSwapGestureRecognized;

@end

