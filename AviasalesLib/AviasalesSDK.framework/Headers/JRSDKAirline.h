@protocol JRSDKAlliance;

@protocol JRSDKAirline

@property (nonatomic, retain) NSNumber *averageRate;
@property (nonatomic, retain) NSNumber *lowcost;
@property (nonatomic, retain) NSString *iata;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) id <JRSDKAlliance> alliance;

@end
