//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDelegate.h"

@class MTActivityIndicatorView, MTDropdownButton, MTTableModel, MTTableView, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIImageView, UIView;

@interface MTDropdownListViewController : UIViewController <UITableViewDelegate>
{
    NSNumber *_currentMainCategoryID;
    unsigned int _currentIndex;
    UIView *_backgroundCancelView;
    MTTableView *_leftTableView;
    MTTableView *_rightTableView;
    MTTableModel *_leftTableModel;
    MTTableModel *_rightTableModel;
    MTDropdownButton *_activeButton;
    id <MTDropdownListViewDelegate> _dropdownListViewDelegate;
    UIImageView *_headerShadowImgeView;
    UIImageView *_bottomImageView;
    UIView *_loadingView;
    unsigned int _selectIndex;
    NSMutableArray *_dataArray;
    BOOL _dropdownViewVisible;
    NSMutableDictionary *_selectActionDictionary;
    struct CGRect _frame;
    UIImageView *_leftView;
    UIImageView *_rightView;
    NSString *_mainCategoryName;
    float LIST_HEIGHT;
    BOOL _dragOut;
    float _lastPositionY;
    float _originalY;
    BOOL _selectedRightTableFirstItem;
    BOOL _hasTabBar;
    NSArray *_buttonArray;
    UIView *_dropdownView;
    NSMutableArray *_currentDropdownArray;
    MTActivityIndicatorView *_activityIndicatorView;
    double _dropDownViewHeight;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) BOOL hasTabBar; // @synthesize hasTabBar=_hasTabBar;
@property(retain, nonatomic) MTActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic, getter=isSelectedRightTableFirstItem) BOOL selectedRightTableFirstItem; // @synthesize selectedRightTableFirstItem=_selectedRightTableFirstItem;
@property(nonatomic) __weak id <MTDropdownListViewDelegate> dropdownListViewDelegate; // @synthesize dropdownListViewDelegate=_dropdownListViewDelegate;
@property(retain, nonatomic) NSMutableArray *currentDropdownArray; // @synthesize currentDropdownArray=_currentDropdownArray;
@property(retain, nonatomic) MTTableView *rightTableView; // @synthesize rightTableView=_rightTableView;
@property(retain, nonatomic) MTTableView *leftTableView; // @synthesize leftTableView=_leftTableView;
@property(retain, nonatomic) UIView *backgroundCancelView; // @synthesize backgroundCancelView=_backgroundCancelView;
@property(nonatomic) double dropDownViewHeight; // @synthesize dropDownViewHeight=_dropDownViewHeight;
@property(retain, nonatomic) UIView *dropdownView; // @synthesize dropdownView=_dropdownView;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)setSelectMainCategory:(id)arg1;
- (void)resetDataArray;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setLeftTableViewSelectedRow:(id)arg1;
- (void)willHideDropdownView:(id)arg1 byButton:(id)arg2;
- (void)willShowDropdownView:(id)arg1 byButton:(id)arg2;
- (void)showDropdownViewByButton:(id)arg1;
- (void)didClickDropdownButton:(id)arg1;
- (void)dragAction:(id)arg1;
- (void)hideDropdownView;
- (void)viewDidLoad;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

