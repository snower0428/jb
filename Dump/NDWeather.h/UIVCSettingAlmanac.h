//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVCSettingBase.h"

@class UICPrototypeTableCellSelect;

__attribute__((visibility("hidden")))
@interface UIVCSettingAlmanac : UIVCSettingBase
{
    UICPrototypeTableCellSelect *parentPrototype;
}

@property(nonatomic) UICPrototypeTableCellSelect *parentPrototype; // @synthesize parentPrototype;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setCellCheckmarkAndColor:(id)arg1;
- (void)festivalShowChanged:(id)arg1;
- (void)sxSettingBackGroundChanged:(id)arg1;
- (void)returnButton:(id)arg1;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupBackground;
- (void)dealloc;
- (void)loadView;
- (void)setupPrototypes;

@end

