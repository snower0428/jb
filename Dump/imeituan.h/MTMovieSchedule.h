//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MTMovieSchedule : NSObject
{
    BOOL _sell;
    BOOL _preferential;
    NSString *_time;
    NSString *_room;
    float _price;
    float _sellPrice;
    NSString *_language;
    NSNumber *_showId;
    NSString *_showDate;
    int _embed;
    int _sellmin;
    NSString *_scheduleDate;
}

+ (id)scheduleWithDict:(id)arg1;
@property(nonatomic) BOOL preferential; // @synthesize preferential=_preferential;
@property(retain, nonatomic) NSString *scheduleDate; // @synthesize scheduleDate=_scheduleDate;
@property(nonatomic) int sellmin; // @synthesize sellmin=_sellmin;
@property(nonatomic) BOOL sell; // @synthesize sell=_sell;
@property(nonatomic) int embed; // @synthesize embed=_embed;
@property(retain, nonatomic) NSString *showDate; // @synthesize showDate=_showDate;
@property(retain, nonatomic) NSNumber *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) float sellPrice; // @synthesize sellPrice=_sellPrice;
@property(nonatomic) float price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *room; // @synthesize room=_room;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;
- (int)compareByShowTime:(id)arg1;
- (int)minuteToBeginShow;
- (int)getTotalMinFromDate:(id)arg1;
- (BOOL)canSell;
- (BOOL)showFinished:(int)arg1;
- (id)calculateShowDate;
- (BOOL)isNextDay;
- (BOOL)nativeReserve;

@end

