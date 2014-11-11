//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSMutableArray, TSelfDate, UITableView;

__attribute__((visibility("hidden")))
@interface UIVCSettingDate : BaseViewController
{
    TSelfDate *selfDate;
    NSMutableArray *dbData;
    UITableView *tvDictList;
}

@property(retain, nonatomic) UITableView *tvDictList; // @synthesize tvDictList;
@property(retain, nonatomic) NSMutableArray *dbData; // @synthesize dbData;
@property(retain, nonatomic) TSelfDate *selfDate; // @synthesize selfDate;
- (void)updateTheme;
- (id)mainImage;
- (id)splitImage;
- (id)overImage;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)rightButton:(id)arg1;
- (void)returnButton:(id)arg1;
- (void)setupNavigationBar;
- (void)setupBackground;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moveCellTo:(int)arg1:(int)arg2;
- (void)refreshDisplay:(id)arg1;
- (void)delSelfDate:(id)arg1;
- (void)loadDatesFromDB;
- (void)notifySettingChanged;

@end
