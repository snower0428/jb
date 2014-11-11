//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDomainObject.h"

#import "MTMovieOrder.h"

@class MTMovieShow, MTOrderCinema, NSArray, NSDate, NSString;

@interface MTMovieOrder : MTDomainObject <MTMovieOrder>
{
    BOOL _embedded;
    BOOL _canUseVoucher;
    int _orderID;
    int _cinemaID;
    NSString *_cinemaName;
    int _movieID;
    NSString *_movieName;
    int _auditoriumID;
    NSString *_auditorium;
    NSString *_sectionID;
    NSString *_section;
    int _totalSeats;
    NSArray *_seats;
    NSArray *_seatTypes;
    int _showID;
    NSDate *_showTime;
    NSDate *_creationTime;
    int _reservationTime;
    int _leftTime;
    int _ticketType;
    NSArray *_prices;
    float _price;
    NSArray *_fees;
    float _fee;
    float _subtotal;
    int _paymentStatus;
    NSDate *_paymentTime;
    int _redeemStatus;
    NSString *_redeemCode;
    NSDate *_redeemTime;
    int _ticketStatus;
    NSDate *_ticketTime;
    int _refundStatus;
    NSDate *_refundTime;
    int _orderSource;
    int _status;
    int _uniqueStatus;
    NSString *_mobile;
    int _poiID;
    NSString *_barcode;
    NSString *_originalID;
    NSString *_description;
    MTOrderCinema *_cinema;
    MTMovieShow *_show;
    NSArray *_voucherArray;
    NSArray *_supportedPaymentMethods;
}

@property(retain, nonatomic) NSArray *supportedPaymentMethods; // @synthesize supportedPaymentMethods=_supportedPaymentMethods;
@property(nonatomic) BOOL canUseVoucher; // @synthesize canUseVoucher=_canUseVoucher;
@property(retain, nonatomic) NSArray *voucherArray; // @synthesize voucherArray=_voucherArray;
@property(retain, nonatomic) MTMovieShow *show; // @synthesize show=_show;
@property(retain, nonatomic) MTOrderCinema *cinema; // @synthesize cinema=_cinema;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *originalID; // @synthesize originalID=_originalID;
@property(retain, nonatomic) NSString *barcode; // @synthesize barcode=_barcode;
@property(nonatomic) int poiID; // @synthesize poiID=_poiID;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) int uniqueStatus; // @synthesize uniqueStatus=_uniqueStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) BOOL embedded; // @synthesize embedded=_embedded;
@property(nonatomic) int orderSource; // @synthesize orderSource=_orderSource;
@property(retain, nonatomic) NSDate *refundTime; // @synthesize refundTime=_refundTime;
@property(nonatomic) int refundStatus; // @synthesize refundStatus=_refundStatus;
@property(retain, nonatomic) NSDate *ticketTime; // @synthesize ticketTime=_ticketTime;
@property(nonatomic) int ticketStatus; // @synthesize ticketStatus=_ticketStatus;
@property(retain, nonatomic) NSDate *redeemTime; // @synthesize redeemTime=_redeemTime;
@property(retain, nonatomic) NSString *redeemCode; // @synthesize redeemCode=_redeemCode;
@property(nonatomic) int redeemStatus; // @synthesize redeemStatus=_redeemStatus;
@property(retain, nonatomic) NSDate *paymentTime; // @synthesize paymentTime=_paymentTime;
@property(nonatomic) int paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(nonatomic) float subtotal; // @synthesize subtotal=_subtotal;
@property(nonatomic) float fee; // @synthesize fee=_fee;
@property(retain, nonatomic) NSArray *fees; // @synthesize fees=_fees;
@property(nonatomic) float price; // @synthesize price=_price;
@property(retain, nonatomic) NSArray *prices; // @synthesize prices=_prices;
@property(nonatomic) int ticketType; // @synthesize ticketType=_ticketType;
@property(nonatomic) int leftTime; // @synthesize leftTime=_leftTime;
@property(nonatomic) int reservationTime; // @synthesize reservationTime=_reservationTime;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(retain, nonatomic) NSDate *showTime; // @synthesize showTime=_showTime;
@property(nonatomic) int showID; // @synthesize showID=_showID;
@property(retain, nonatomic) NSArray *seatTypes; // @synthesize seatTypes=_seatTypes;
@property(retain, nonatomic) NSArray *seats; // @synthesize seats=_seats;
@property(nonatomic) int totalSeats; // @synthesize totalSeats=_totalSeats;
@property(retain, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *auditorium; // @synthesize auditorium=_auditorium;
@property(nonatomic) int auditoriumID; // @synthesize auditoriumID=_auditoriumID;
@property(retain, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
@property(nonatomic) int movieID; // @synthesize movieID=_movieID;
@property(retain, nonatomic) NSString *cinemaName; // @synthesize cinemaName=_cinemaName;
@property(nonatomic) int cinemaID; // @synthesize cinemaID=_cinemaID;
@property(nonatomic) int orderID; // @synthesize orderID=_orderID;
- (void).cxx_destruct;
- (void)setWithPersistentObject:(id)arg1;
- (void)setWithDictionary:(id)arg1;
- (id)seatDescription;
- (id)showTimeDescription;
- (id)toReserveOrder;

@end
