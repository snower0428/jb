//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicListView.h"

@interface TBSNSAccountMessageListView : TBSNSBasicListView
{
    id myDelegate0;
}

@property(nonatomic) id delegate; // @synthesize delegate=myDelegate0;
- (id)serviceParametersForListView:(id)arg1;
- (void)completeLoadDataWithDataCount:(int)arg1 forListView:(id)arg2;
- (void)scrollEventForListView:(id)arg1 withContentOffset:(struct CGPoint)arg2;
- (void)selectedItem:(int)arg1 forListView:(id)arg2;
- (void)clickAccountHeader:(id)arg1;
- (id)getAccountMessageItemAtIndex:(int)arg1;
- (void)setServiceTypeWithPageSize:(int)arg1;
- (void)subclassInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
