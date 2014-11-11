//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTableItem.h"

@class TBCreateTradeNodeType, UIColor;

@interface TBCreateTradeTableItem : TBTableItem
{
    TBCreateTradeNodeType *_createTradeNode;
    UIColor *_backgroundColor;
    UIColor *_seprateColor;
    UIColor *_topSeprateColor;
    int _bgtype;
    int _sptype;
}

+ (id)itemWithTradeNode:(id)arg1 bgType:(int)arg2;
+ (id)itemWithTradeNode:(id)arg1 backgroundColor:(id)arg2 seprateColor:(id)arg3;
+ (id)itemWithTradeNode:(id)arg1;
@property(nonatomic) int sptype; // @synthesize sptype=_sptype;
@property(nonatomic) int bgtype; // @synthesize bgtype=_bgtype;
@property(retain, nonatomic) UIColor *topSeprateColor; // @synthesize topSeprateColor=_topSeprateColor;
@property(retain, nonatomic) UIColor *seprateColor; // @synthesize seprateColor=_seprateColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) TBCreateTradeNodeType *createTradeNode; // @synthesize createTradeNode=_createTradeNode;
- (void).cxx_destruct;
- (id)init;

@end
