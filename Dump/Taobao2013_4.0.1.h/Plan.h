//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSString;

@interface Plan : NSManagedObject
{
}

- (void)convertFromDictionary:(id)arg1;
- (id)converToDictionary;

// Remaining properties
@property(retain, nonatomic) NSString *address_name; // @dynamic address_name;
@property(retain, nonatomic) NSDate *alert_time; // @dynamic alert_time;
@property(retain, nonatomic) NSString *bdid; // @dynamic bdid;
@property(retain, nonatomic) id contacts; // @dynamic contacts;
@property(retain, nonatomic) NSString *des; // @dynamic des;
@property(retain, nonatomic) NSNumber *editable; // @dynamic editable;
@property(retain, nonatomic) NSDate *end_time; // @dynamic end_time;
@property(retain, nonatomic) NSString *event_id; // @dynamic event_id;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(retain, nonatomic) NSNumber *is_all_day; // @dynamic is_all_day;
@property(retain, nonatomic) NSDate *modified_time; // @dynamic modified_time;
@property(retain, nonatomic) NSNumber *remind_time; // @dynamic remind_time;
@property(retain, nonatomic) NSNumber *repeat_interval; // @dynamic repeat_interval;
@property(retain, nonatomic) NSString *repeat_unit; // @dynamic repeat_unit;
@property(retain, nonatomic) NSString *source_id; // @dynamic source_id;
@property(retain, nonatomic) NSDate *start_time; // @dynamic start_time;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *user_id; // @dynamic user_id;

@end

