//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewController.h"

#import "UITableViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface OSGenreSelectorController : TTTableViewController <UITableViewDelegate>
{
    NSString *_superGenre;
    UIButton *playingButton;
    UIView *_topView;
    UIImageView *_backImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIButton *playingButton; // @synthesize playingButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)createModel;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithSuperGenre:(id)arg1;
- (void)initSubViewsForiPad;
- (void)initSubViewsForiPhone;
- (void)showPlayingOrEdit;
- (void)playInBackgroundNotify;
- (void)showPlayingButton;
- (void)currentPlaying:(id)arg1;
- (void)customBack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
