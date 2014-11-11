//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseView.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface AccountSyncView : BaseView
{
    UIActivityIndicatorView *progressIndicator;
    UILabel *totalProgess;
    UILabel *currentProgress;
    id <AccountSyncViewDelegate><AccountSyncViewDataSource> _accountSyncDelegate;
}

@property(nonatomic) UIActivityIndicatorView *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) id <AccountSyncViewDelegate><AccountSyncViewDataSource> accountSyncDelegate; // @synthesize accountSyncDelegate=_accountSyncDelegate;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initCommon;
- (void)syncCancledButtonPress:(id)arg1;

@end

