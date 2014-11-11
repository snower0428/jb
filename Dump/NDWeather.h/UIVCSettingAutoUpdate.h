//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVCSettingBase.h"

#import "PickerDelegate.h"

@class UICPrototypeTableCellSelect;

__attribute__((visibility("hidden")))
@interface UIVCSettingAutoUpdate : UIVCSettingBase <PickerDelegate>
{
    UICPrototypeTableCellSelect *parentPrototype;
    UICPrototypeTableCellSelect *curSelecPrototype;
    int _curIntervalType;
}

@property(nonatomic) UICPrototypeTableCellSelect *curSelecPrototype; // @synthesize curSelecPrototype;
@property(nonatomic) UICPrototypeTableCellSelect *parentPrototype; // @synthesize parentPrototype;
- (void)setStartEndTimeWithStartTime:(id)arg1 WithEndTime:(id)arg2;
- (void)setSolarTimeIntervalData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showIntervalTimeView1:(id)arg1;
- (void)_showIntervalTimeView0:(id)arg1;
- (void)_autoScroll;
- (void)_showStarEndTimeView:(id)arg1;
- (void)wifiUpdateOnlyChanged:(id)arg1;
- (void)autoUpdateChanged:(id)arg1;
- (void)returnButton:(id)arg1;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupBackground;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)setupPrototypes;

@end
