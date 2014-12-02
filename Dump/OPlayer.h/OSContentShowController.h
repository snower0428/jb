//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewController.h"

@class OSFeedGenre, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface OSContentShowController : TTTableViewController
{
    int contentType;
    OSFeedGenre *genre;
    UIButton *playingButton;
    UIImageView *_backImageView;
    UIView *_topView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) UIButton *playingButton; // @synthesize playingButton;
@property(retain, nonatomic) OSFeedGenre *genre; // @synthesize genre;
@property(nonatomic) int contentType; // @synthesize contentType;
- (id)createDelegate;
- (void)createModel;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithContentType:(int)arg1 andGenre:(id)arg2;
- (id)initWithContentType:(int)arg1;
- (void)viewWillRotate:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)currentPlaying:(id)arg1;
- (void)showPlayingOrEdit;
- (void)showPlayingButton;
- (void)playInBackgroundNotify;
- (void)relocateSubViews:(int)arg1;
- (void)initSubViewsForiPad;
- (void)initSubViewsForiPhone;
- (void)customBack:(id)arg1;
- (id)nameForContentType:(int)arg1;

@end
