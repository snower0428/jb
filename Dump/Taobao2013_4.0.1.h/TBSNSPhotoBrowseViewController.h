//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIKPhotoBrowseViewController.h"

@class TBSNSRecommendToolBar;

@interface TBSNSPhotoBrowseViewController : TBIKPhotoBrowseViewController
{
    CDUnknownBlockType _deleteBlock;
    TBSNSRecommendToolBar *_toolBar;
}

+ (BOOL)tbNeedToolbar;
@property(retain, nonatomic) TBSNSRecommendToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteButtonClicked:(id)arg1;
- (void)goBackToPreViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
