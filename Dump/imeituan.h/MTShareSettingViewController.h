//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

@class MTShareSettingCell;

@interface MTShareSettingViewController : MTBaseViewController
{
    MTShareSettingCell *_currentCell;
}

- (void).cxx_destruct;
- (void)revokeOauthToken;
- (void)didClickShareCell:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setupUI;
- (id)nameLabelWithText:(id)arg1;
- (id)imageViewWithImageName:(id)arg1;

@end

