//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSSearchBusinessBasicView.h"

#import "TBSNSBasicServiceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSString, TBSNSRelationService, UIView;

@interface TBSNSAccountSearchBusinessView : TBSNSSearchBusinessBasicView <UITableViewDataSource, UITableViewDelegate, TBSNSBasicServiceDelegate>
{
    BOOL isFollowAction;
    NSIndexPath *_indexPath;
    TBSNSRelationService *_accountOperationService;
    BOOL _isNeedSearchBar;
    BOOL _isHotSearch;
    UIView *_accountNoneView;
    NSString *_keyWord;
    NSString *_showWord;
}

@property(retain, nonatomic) NSString *showWord; // @synthesize showWord=_showWord;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(nonatomic) BOOL isHotSearch; // @synthesize isHotSearch=_isHotSearch;
@property(nonatomic) BOOL isNeedSearchBar; // @synthesize isNeedSearchBar=_isNeedSearchBar;
@property(retain, nonatomic) UIView *accountNoneView; // @synthesize accountNoneView=_accountNoneView;
- (void).cxx_destruct;
- (void)serviceDidStartLoad:(id)arg1;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)headSectionView;
- (void)setFollow:(BOOL)arg1;
- (void)accountFollowOperationWithSid:(id)arg1;
- (id)tableView:(id)arg1 getCellForItemAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (void)accountFollowOperation:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchWithItem:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)setAccountNoneViewLabel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withKeyWord:(id)arg2 isNeedSearchBar:(BOOL)arg3 withShowWord:(id)arg4;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)searchBarDidCancel;
- (void)setNoData:(BOOL)arg1;

@end

