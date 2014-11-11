//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBBookmarkCategoryServiceDelegate.h"

@class TBBookmarkCategoryService, UITableView;

__attribute__((visibility("hidden")))
@interface TBBookMarkCategoryViewController : TBViewController <TBBookmarkCategoryServiceDelegate>
{
    id <TBBookMarkCategoryViewControllerDelegate> delegate;
    UITableView *_tableView;
    int _bookmarkType;
    TBBookmarkCategoryService *_categoryService;
}

@property(retain, nonatomic) TBBookmarkCategoryService *categoryService; // @synthesize categoryService=_categoryService;
@property(nonatomic) int bookmarkType; // @synthesize bookmarkType=_bookmarkType;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id <TBBookMarkCategoryViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)cancelClick;
- (void)favoriteCategoryService:(id)arg1 selectedCategory:(id)arg2;
- (void)resetNaviBar;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithFavorateType:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

