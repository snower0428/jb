//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVCSettingBase.h"

#import "PickerDelegate.h"
#import "UIPersonInfoMgrViewDelegate.h"

@class UICPrototypeTableCellSelect, UIPersonInfoMgrView, UIVCSettingMain;

__attribute__((visibility("hidden")))
@interface UIVCSettingPersonInfo : UIVCSettingBase <PickerDelegate, UIPersonInfoMgrViewDelegate>
{
    UICPrototypeTableCellSelect *parentPrototype;
    UICPrototypeTableCellSelect *curSelecPrototype;
    UIPersonInfoMgrView *mgrView;
    int peopleFlg;
    UIVCSettingMain *mainSetting;
    BOOL existForAvilableCheck;
    BOOL directReturn;
    BOOL avilableCheck;
    BOOL infoNoAvilable;
    BOOL isForNextDayFortune;
}

@property(nonatomic) BOOL isForNextDayFortune; // @synthesize isForNextDayFortune;
@property(nonatomic) UICPrototypeTableCellSelect *curSelecPrototype; // @synthesize curSelecPrototype;
@property(nonatomic) UICPrototypeTableCellSelect *parentPrototype; // @synthesize parentPrototype;
- (void)setDelButtonEnable:(BOOL)arg1;
- (void)setupBottomView;
- (void)setupHeaderView;
- (void)updateViewPersionInfo;
- (id)_checkHyphenatedNameAvilable:(BOOL)arg1;
- (id)_checkNameAvilable:(id)arg1;
- (void)_showShic:(id)arg1;
- (void)setPeopleInfoFlag;
- (void)peopleInfoShowNotify:(id)arg1;
- (void)_relativeChanged:(id)arg1 withValue:(id)arg2;
- (void)_nameChanged:(id)arg1 withName:(id)arg2;
- (void)setYearMonthDayWithShowSolar:(BOOL)arg1 WithYear:(int)arg2 WithMonth:(int)arg3 WithDay:(int)arg4;
- (void)setLunarTimeIntervalData:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)deleteBtnClick:(id)arg1;
- (void)didDeletePersonInfo;
- (void)didClickSyn:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)rightButton:(id)arg1;
- (void)returnButton:(id)arg1;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)viewDidLoad;
- (void)loadView;
- (void)setupPrototypes;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

