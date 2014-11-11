//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBModelStatusInfo;

@interface TBModelStatusHandler : NSObject
{
    TBModelStatusInfo *_statusInfo;
    id <TBModelStatusDelegate> _delegate;
    CDUnknownBlockType _selectorForErrorBlock;
    CDUnknownBlockType _selectorForEmptyBlock;
}

+ (id)shopListFailedStatusHandler;
+ (id)searchListFailedStatusHandler;
@property(copy, nonatomic) CDUnknownBlockType selectorForEmptyBlock; // @synthesize selectorForEmptyBlock=_selectorForEmptyBlock;
@property(copy, nonatomic) CDUnknownBlockType selectorForErrorBlock; // @synthesize selectorForErrorBlock=_selectorForErrorBlock;
@property(nonatomic) id <TBModelStatusDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBModelStatusInfo *statusInfo; // @synthesize statusInfo=_statusInfo;
- (void).cxx_destruct;
- (void)removeStatusViewFromView:(id)arg1 error:(id)arg2;
- (void)removeStatusViewFromView:(id)arg1;
- (void)removeStatusViewFromView:(id)arg1 hideLoading:(BOOL)arg2;
- (void)hideLoadingView;
- (void)showLoadingViewInView:(id)arg1 frame:(struct CGRect)arg2;
- (id)showEmptyViewInView:(id)arg1 frame:(struct CGRect)arg2;
- (id)showViewforError:(id)arg1 inView:(id)arg2 frame:(struct CGRect)arg3 actionTarget:(id)arg4 actionSelector:(SEL)arg5;
- (id)showViewforError:(id)arg1 inView:(id)arg2 frame:(struct CGRect)arg3;
- (void)selectorForEmpty;
- (void)selectorForError:(id)arg1;
- (id)loadingView;
- (id)emptyViewWithFrame:(struct CGRect)arg1;
- (id)errorViewWithFrame:(struct CGRect)arg1 error:(id)arg2 actionTarget:(id)arg3 actionSelector:(SEL)arg4;
- (id)errorInfo;
- (id)initWithStatusInfo:(id)arg1;
- (id)initWithStatusInfo:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end
