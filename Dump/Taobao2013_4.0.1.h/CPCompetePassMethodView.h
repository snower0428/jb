//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UIButton, UIImage, UIImageView, UILabel, UITableView;

@interface CPCompetePassMethodView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIImageView *_backGroudView;
    UIImageView *_titleBg;
    UILabel *_title;
    UIImageView *_seqLineView;
    UIButton *_comfirm;
    UIButton *_cancel;
    UIImage *btnNomal;
    UIImage *btnHightLight;
    UIImage *viewBg;
    UIImage *titleBg;
    UIImage *_seqLine;
    UILabel *_promptText;
    UILabel *_promptStackNum;
    UILabel *_promptStackMoney;
    id <CPCompetePassMethodViewDelegate> _delegate;
}

@property(nonatomic) id <CPCompetePassMethodViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *backGroudView; // @synthesize backGroudView=_backGroudView;
@property(retain, nonatomic) UIButton *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) UIButton *comfirm; // @synthesize comfirm=_comfirm;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)loadImage;
- (void)updateStackNumAndMoney;
- (void)setStackNum:(int)arg1 andTotalMoney:(int)arg2;
- (void)addPromptLabel;
- (void)createBtn:(id)arg1;
- (void)addSeqLine;
- (void)addTitleView;
- (void)btnClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
