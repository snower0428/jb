//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PickerDelegate.h"
#import "UIMayViewDelegate.h"
#import "UIYJQureyViewDataSource.h"
#import "UIYJQureyViewDelegate.h"

@class UIMayView, UIYJQureyView;

__attribute__((visibility("hidden")))
@interface UIVCAlmanacMay : BaseViewController <UIMayViewDelegate, UIYJQureyViewDataSource, UIYJQureyViewDelegate, PickerDelegate>
{
    int nCurYear;
    int nCurMonth;
    int curSearchType;
    UIMayView *vew4Content;
    UIYJQureyView *vew4List;
}

- (void)updateTheme;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)queryView:(id)arg1 didSelectName:(id)arg2;
- (id)queryYJResultsForQueryView;
- (id)getSkinImageName;
- (void)didClickItem:(id)arg1;
- (void)didClickCommonItem:(id)arg1 ItemButton:(id)arg2;
- (void)didClickSearch:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)getMonth:(id)arg1;
- (id)getLayoutDictionary;
- (void)setSolarYearMonthWithYear:(int)arg1 WithMonth:(int)arg2;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)setupViewsLayoutID;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showMonth:(int)arg1:(int)arg2;

@end
