//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, UIImageView, UILabel, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface EncodingIndexViewController : UIViewController
{
    NSMutableDictionary *tempValue;
    UITableView *indexTableview;
    NSIndexPath *lastIndexPath;
    NSArray *indexArray;
    NSString *fileTitle;
    UILabel *infoView;
    UIImageView *mainlistBack;
    UIImageView *mainlistBackShadow;
    UIView *topView;
    UIView *headWithShadowView;
    UILabel *topTitleLabel;
    BOOL isFromSettingsView;
}

@property BOOL isFromSettingsView; // @synthesize isFromSettingsView;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel;
@property(retain, nonatomic) UIView *headWithShadowView; // @synthesize headWithShadowView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) UIImageView *mainlistBackShadow; // @synthesize mainlistBackShadow;
@property(retain, nonatomic) UIImageView *mainlistBack; // @synthesize mainlistBack;
@property(retain, nonatomic) UILabel *infoView; // @synthesize infoView;
@property(retain, nonatomic) NSString *fileTitle; // @synthesize fileTitle;
@property(retain, nonatomic) NSArray *indexArray; // @synthesize indexArray;
@property(retain, nonatomic) NSMutableDictionary *tempValue; // @synthesize tempValue;
@property(retain, nonatomic) NSIndexPath *lastIndexPath; // @synthesize lastIndexPath;
@property(retain, nonatomic) UITableView *indexTableview; // @synthesize indexTableview;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)showInfo:(id)arg1;
- (void)relocateSubViews:(int)arg1;
- (void)subtitleLoadMessageFail:(id)arg1;
- (void)subtitleLoadMessageOK:(id)arg1;
- (void)customBack:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

