//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

@class MTRoomReserveModel;

@interface MTRoomReservationService : MTBaseService
{
    MTRoomReserveModel *_roomReserveModel;
}

@property(retain, nonatomic) MTRoomReserveModel *roomReserveModel; // @synthesize roomReserveModel=_roomReserveModel;
- (void).cxx_destruct;
- (void)fetchRoomInfoOfHotel:(int)arg1 deal:(id)arg2 start:(id)arg3 days:(int)arg4 finished:(CDUnknownBlockType)arg5;
- (id)init;

@end
