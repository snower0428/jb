//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTAttributedLabel.h"

@class NSMutableAttributedString;

@interface TripCPAttributedLabel : TTTAttributedLabel
{
    NSMutableAttributedString *attributedString;
}

@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString;
- (void).cxx_destruct;
- (void)clearAttributedString;
- (void)addAttributedLabelText:(id)arg1;
- (void)addLabelText:(id)arg1 UIColor:(id)arg2 andfontName:(id)arg3 fontSize:(int)arg4;
- (void)addLabelText:(id)arg1 UIColor:(id)arg2 andfontsize:(int)arg3;
- (void)addLabelComponent:(id)arg1;
- (id)init;

@end

