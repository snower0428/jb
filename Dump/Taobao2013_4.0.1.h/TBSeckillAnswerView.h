//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface TBSeckillAnswerView : UIView
{
    CDUnknownBlockType _answerView;
    unsigned int _selectedCount;
    NSArray *_answerList;
    int _columnCount;
    int _rowCount;
    int _maxAnswerCount;
}

- (void).cxx_destruct;
- (float)columnWidth:(unsigned int)arg1;
- (float)labelTotalWidth:(unsigned int)arg1;
- (void)drawTableLines;
- (void)resetItemWithIndex:(unsigned int)arg1;
- (void)selectedViewItem:(id)arg1;
- (void)initViews;
- (void)touchAnswerView:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 questionModel:(id)arg2;

@end
