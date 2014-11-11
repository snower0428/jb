//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBCityPayResultService;

@interface STScratchView : UIView
{
    struct CGPoint previousTouchLocation;
    struct CGPoint currentTouchLocation;
    struct CGImage *hideImage;
    struct CGImage *scratchImage;
    struct CGContext *contextMask;
    int flag;
    NSString *_orderNO;
    NSString *_prizeDrawRespStatus;
    NSString *_prizePoint;
    TBCityPayResultService *_payResultService;
}

@property(retain, nonatomic) TBCityPayResultService *payResultService; // @synthesize payResultService=_payResultService;
@property(retain, nonatomic) NSString *prizePoint; // @synthesize prizePoint=_prizePoint;
@property(retain, nonatomic) NSString *prizeDrawRespStatus; // @synthesize prizeDrawRespStatus=_prizeDrawRespStatus;
@property(retain, nonatomic) NSString *orderNO; // @synthesize orderNO=_orderNO;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initScratch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scratchTheViewFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)setHideView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

