//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMResponse.h"

@class NSArray;

@interface TMGetRatesRendersResponse : TMResponse
{
    NSArray *_list;
    NSArray *_dsr;
    int _anony;
}

@property(nonatomic) int anony; // @synthesize anony=_anony;
@property(retain, nonatomic) NSArray *dsr; // @synthesize dsr=_dsr;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

