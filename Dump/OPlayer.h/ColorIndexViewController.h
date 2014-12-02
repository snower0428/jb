//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSIndexPath, NSMutableDictionary, UIButton, UIImageView, UILabel, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface ColorIndexViewController : UIViewController
{
    NSMutableDictionary *tempValue;
    UITableView *indexTableview;
    NSIndexPath *lastIndexPath;
    NSArray *indexArray;
    int streamType;
    UIButton *CustomBackButton;
    UIImageView *imageTopView;
    UIView *topView;
    UIImageView *backImageView;
    UIImageView *backImageViewShadow;
    UILabel *titleLabel;
    int colorType;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *backImageViewShadow; // @synthesize backImageViewShadow;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) UIImageView *imageTopView; // @synthesize imageTopView;
@property(retain, nonatomic) UIButton *CustomBackButton; // @synthesize CustomBackButton;
@property int colorType; // @synthesize colorType;
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
- (void)relocateSubViews:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)customBack:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

