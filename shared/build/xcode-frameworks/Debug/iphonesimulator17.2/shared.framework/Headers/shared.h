#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedAccountBalanceData, SharedKotlinUnit, SharedRuntimeTransacterTransaction, SharedKotlinThrowable, SharedRuntimeBaseTransacterImpl, SharedRuntimeTransacterImpl, SharedRuntimeQuery<__covariant RowType>, SharedAccountInstrumentData, SharedAccountReceivableData, SharedAccountTransactionData, SharedAccountBalanceQueries, SharedAccountInstrumentQueries, SharedAccountReceivableQueries, SharedAccountTransactionQueries, SharedIndexQueries, SharedInstrumentQueries, SharedNewsQueries, SharedParticipationDataQueries, SharedStatusDataQueries, SharedVolumnDataQueries, SharedCapitaDbCompanion, SharedIndexData, SharedInstrumentData, SharedNewsData, SharedParticipationData, SharedStatusData, SharedVolumnData, SharedKotlinArray<T>, SharedRuntimeExecutableQuery<__covariant RowType>, SharedRuntimeAfterVersion, SharedKotlinByteArray, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinByteIterator;

@protocol SharedRuntimeSqlDriver, SharedRuntimeTransactionWithoutReturn, SharedRuntimeTransactionWithReturn, SharedRuntimeTransacterBase, SharedRuntimeTransacter, SharedCapitaDb, SharedRuntimeSqlSchema, SharedPlatform, SharedRuntimeQueryListener, SharedRuntimeQueryResult, SharedRuntimeSqlPreparedStatement, SharedRuntimeSqlCursor, SharedRuntimeCloseable, SharedRuntimeTransactionCallbacks, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountBalanceData")))
@interface SharedAccountBalanceData : SharedBase
- (instancetype)initWithAccountCode:(NSString *)accountCode accruedCharge:(SharedDouble * _Nullable)accruedCharge assetValue:(SharedDouble * _Nullable)assetValue buyingPower:(SharedDouble * _Nullable)buyingPower cashBalance:(SharedDouble * _Nullable)cashBalance costValue:(SharedDouble * _Nullable)costValue currentBalance:(SharedDouble * _Nullable)currentBalance deptEquityRatio:(SharedDouble * _Nullable)deptEquityRatio equity:(SharedDouble * _Nullable)equity equityDebtRatio:(SharedDouble * _Nullable)equityDebtRatio immatureBalance:(SharedDouble * _Nullable)immatureBalance loanRatio:(SharedDouble * _Nullable)loanRatio marginEquity:(SharedDouble * _Nullable)marginEquity marketValue:(SharedDouble * _Nullable)marketValue totalDeposit:(SharedDouble * _Nullable)totalDeposit totalWithdrawal:(SharedDouble * _Nullable)totalWithdrawal unclearCheque:(SharedDouble * _Nullable)unclearCheque __attribute__((swift_name("init(accountCode:accruedCharge:assetValue:buyingPower:cashBalance:costValue:currentBalance:deptEquityRatio:equity:equityDebtRatio:immatureBalance:loanRatio:marginEquity:marketValue:totalDeposit:totalWithdrawal:unclearCheque:)"))) __attribute__((objc_designated_initializer));
- (SharedAccountBalanceData *)doCopyAccountCode:(NSString *)accountCode accruedCharge:(SharedDouble * _Nullable)accruedCharge assetValue:(SharedDouble * _Nullable)assetValue buyingPower:(SharedDouble * _Nullable)buyingPower cashBalance:(SharedDouble * _Nullable)cashBalance costValue:(SharedDouble * _Nullable)costValue currentBalance:(SharedDouble * _Nullable)currentBalance deptEquityRatio:(SharedDouble * _Nullable)deptEquityRatio equity:(SharedDouble * _Nullable)equity equityDebtRatio:(SharedDouble * _Nullable)equityDebtRatio immatureBalance:(SharedDouble * _Nullable)immatureBalance loanRatio:(SharedDouble * _Nullable)loanRatio marginEquity:(SharedDouble * _Nullable)marginEquity marketValue:(SharedDouble * _Nullable)marketValue totalDeposit:(SharedDouble * _Nullable)totalDeposit totalWithdrawal:(SharedDouble * _Nullable)totalWithdrawal unclearCheque:(SharedDouble * _Nullable)unclearCheque __attribute__((swift_name("doCopy(accountCode:accruedCharge:assetValue:buyingPower:cashBalance:costValue:currentBalance:deptEquityRatio:equity:equityDebtRatio:immatureBalance:loanRatio:marginEquity:marketValue:totalDeposit:totalWithdrawal:unclearCheque:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accountCode __attribute__((swift_name("accountCode")));
@property (readonly) SharedDouble * _Nullable accruedCharge __attribute__((swift_name("accruedCharge")));
@property (readonly) SharedDouble * _Nullable assetValue __attribute__((swift_name("assetValue")));
@property (readonly) SharedDouble * _Nullable buyingPower __attribute__((swift_name("buyingPower")));
@property (readonly) SharedDouble * _Nullable cashBalance __attribute__((swift_name("cashBalance")));
@property (readonly) SharedDouble * _Nullable costValue __attribute__((swift_name("costValue")));
@property (readonly) SharedDouble * _Nullable currentBalance __attribute__((swift_name("currentBalance")));
@property (readonly) SharedDouble * _Nullable deptEquityRatio __attribute__((swift_name("deptEquityRatio")));
@property (readonly) SharedDouble * _Nullable equity __attribute__((swift_name("equity")));
@property (readonly) SharedDouble * _Nullable equityDebtRatio __attribute__((swift_name("equityDebtRatio")));
@property (readonly) SharedDouble * _Nullable immatureBalance __attribute__((swift_name("immatureBalance")));
@property (readonly) SharedDouble * _Nullable loanRatio __attribute__((swift_name("loanRatio")));
@property (readonly) SharedDouble * _Nullable marginEquity __attribute__((swift_name("marginEquity")));
@property (readonly) SharedDouble * _Nullable marketValue __attribute__((swift_name("marketValue")));
@property (readonly) SharedDouble * _Nullable totalDeposit __attribute__((swift_name("totalDeposit")));
@property (readonly) SharedDouble * _Nullable totalWithdrawal __attribute__((swift_name("totalWithdrawal")));
@property (readonly) SharedDouble * _Nullable unclearCheque __attribute__((swift_name("unclearCheque")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface SharedRuntimeBaseTransacterImpl : SharedBase
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(SharedKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(SharedRuntimeTransacterTransaction *)transaction enclosing:(SharedRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(SharedKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<SharedRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol SharedRuntimeTransacterBase
@required
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol SharedRuntimeTransacter <SharedRuntimeTransacterBase>
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("RuntimeTransacterImpl")))
@interface SharedRuntimeTransacterImpl : SharedRuntimeBaseTransacterImpl <SharedRuntimeTransacter>
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountBalanceQueries")))
@interface SharedAccountBalanceQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAccountBalance __attribute__((swift_name("deleteAccountBalance()")));
- (SharedRuntimeQuery<SharedAccountBalanceData *> *)getAccountBalance __attribute__((swift_name("getAccountBalance()")));
- (SharedRuntimeQuery<id> *)getAccountBalanceMapper:(id (^)(NSString *, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable))mapper __attribute__((swift_name("getAccountBalance(mapper:)")));
- (SharedRuntimeQuery<SharedAccountBalanceData *> *)getAccountBalanceByUniqueIdUniqueCode:(NSString *)uniqueCode __attribute__((swift_name("getAccountBalanceByUniqueId(uniqueCode:)")));
- (SharedRuntimeQuery<id> *)getAccountBalanceByUniqueIdUniqueCode:(NSString *)uniqueCode mapper:(id (^)(NSString *, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable))mapper __attribute__((swift_name("getAccountBalanceByUniqueId(uniqueCode:mapper:)")));
- (void)insertAccountBalanceDataAccountCode:(NSString *)accountCode accruedCharge:(SharedDouble * _Nullable)accruedCharge assetValue:(SharedDouble * _Nullable)assetValue buyingPower:(SharedDouble * _Nullable)buyingPower cashBalance:(SharedDouble * _Nullable)cashBalance costValue:(SharedDouble * _Nullable)costValue currentBalance:(SharedDouble * _Nullable)currentBalance deptEquityRatio:(SharedDouble * _Nullable)deptEquityRatio equity:(SharedDouble * _Nullable)equity equityDebtRatio:(SharedDouble * _Nullable)equityDebtRatio immatureBalance:(SharedDouble * _Nullable)immatureBalance loanRatio:(SharedDouble * _Nullable)loanRatio marginEquity:(SharedDouble * _Nullable)marginEquity marketValue:(SharedDouble * _Nullable)marketValue totalDeposit:(SharedDouble * _Nullable)totalDeposit totalWithdrawal:(SharedDouble * _Nullable)totalWithdrawal unclearCheque:(SharedDouble * _Nullable)unclearCheque __attribute__((swift_name("insertAccountBalanceData(accountCode:accruedCharge:assetValue:buyingPower:cashBalance:costValue:currentBalance:deptEquityRatio:equity:equityDebtRatio:immatureBalance:loanRatio:marginEquity:marketValue:totalDeposit:totalWithdrawal:unclearCheque:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInstrumentData")))
@interface SharedAccountInstrumentData : SharedBase
- (instancetype)initWithInstrumentIndex:(double)instrumentIndex long_name:(NSString * _Nullable)long_name short_name:(NSString * _Nullable)short_name value_:(SharedDouble * _Nullable)value_ closed_price:(SharedDouble * _Nullable)closed_price change:(SharedDouble * _Nullable)change change_icon:(SharedDouble * _Nullable)change_icon total_quantity:(SharedDouble * _Nullable)total_quantity salable_quantity:(SharedDouble * _Nullable)salable_quantity average_cost:(SharedDouble * _Nullable)average_cost total_cost:(SharedDouble * _Nullable)total_cost close_price:(SharedDouble * _Nullable)close_price unrealized_gain:(SharedDouble * _Nullable)unrealized_gain gain_percent:(SharedDouble * _Nullable)gain_percent cost_value:(SharedDouble * _Nullable)cost_value __attribute__((swift_name("init(instrumentIndex:long_name:short_name:value_:closed_price:change:change_icon:total_quantity:salable_quantity:average_cost:total_cost:close_price:unrealized_gain:gain_percent:cost_value:)"))) __attribute__((objc_designated_initializer));
- (SharedAccountInstrumentData *)doCopyInstrumentIndex:(double)instrumentIndex long_name:(NSString * _Nullable)long_name short_name:(NSString * _Nullable)short_name value_:(SharedDouble * _Nullable)value_ closed_price:(SharedDouble * _Nullable)closed_price change:(SharedDouble * _Nullable)change change_icon:(SharedDouble * _Nullable)change_icon total_quantity:(SharedDouble * _Nullable)total_quantity salable_quantity:(SharedDouble * _Nullable)salable_quantity average_cost:(SharedDouble * _Nullable)average_cost total_cost:(SharedDouble * _Nullable)total_cost close_price:(SharedDouble * _Nullable)close_price unrealized_gain:(SharedDouble * _Nullable)unrealized_gain gain_percent:(SharedDouble * _Nullable)gain_percent cost_value:(SharedDouble * _Nullable)cost_value __attribute__((swift_name("doCopy(instrumentIndex:long_name:short_name:value_:closed_price:change:change_icon:total_quantity:salable_quantity:average_cost:total_cost:close_price:unrealized_gain:gain_percent:cost_value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable average_cost __attribute__((swift_name("average_cost")));
@property (readonly) SharedDouble * _Nullable change __attribute__((swift_name("change")));
@property (readonly) SharedDouble * _Nullable change_icon __attribute__((swift_name("change_icon")));
@property (readonly) SharedDouble * _Nullable close_price __attribute__((swift_name("close_price")));
@property (readonly) SharedDouble * _Nullable closed_price __attribute__((swift_name("closed_price")));
@property (readonly) SharedDouble * _Nullable cost_value __attribute__((swift_name("cost_value")));
@property (readonly) SharedDouble * _Nullable gain_percent __attribute__((swift_name("gain_percent")));
@property (readonly) double instrumentIndex __attribute__((swift_name("instrumentIndex")));
@property (readonly) NSString * _Nullable long_name __attribute__((swift_name("long_name")));
@property (readonly) SharedDouble * _Nullable salable_quantity __attribute__((swift_name("salable_quantity")));
@property (readonly) NSString * _Nullable short_name __attribute__((swift_name("short_name")));
@property (readonly) SharedDouble * _Nullable total_cost __attribute__((swift_name("total_cost")));
@property (readonly) SharedDouble * _Nullable total_quantity __attribute__((swift_name("total_quantity")));
@property (readonly) SharedDouble * _Nullable unrealized_gain __attribute__((swift_name("unrealized_gain")));
@property (readonly) SharedDouble * _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInstrumentQueries")))
@interface SharedAccountInstrumentQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAccountInstrumentData __attribute__((swift_name("deleteAccountInstrumentData()")));
- (SharedRuntimeQuery<SharedAccountInstrumentData *> *)getAccountInstrumentByUniqueIdUniqueName:(NSString * _Nullable)uniqueName __attribute__((swift_name("getAccountInstrumentByUniqueId(uniqueName:)")));
- (SharedRuntimeQuery<id> *)getAccountInstrumentByUniqueIdUniqueName:(NSString * _Nullable)uniqueName mapper:(id (^)(SharedDouble *, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable))mapper __attribute__((swift_name("getAccountInstrumentByUniqueId(uniqueName:mapper:)")));
- (SharedRuntimeQuery<SharedAccountInstrumentData *> *)getAccountInstrumentData __attribute__((swift_name("getAccountInstrumentData()")));
- (SharedRuntimeQuery<id> *)getAccountInstrumentDataMapper:(id (^)(SharedDouble *, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable))mapper __attribute__((swift_name("getAccountInstrumentData(mapper:)")));
- (void)insertAccountInstrumentDataInstrumentIndex:(double)instrumentIndex long_name:(NSString * _Nullable)long_name short_name:(NSString * _Nullable)short_name value_:(SharedDouble * _Nullable)value_ closed_price:(SharedDouble * _Nullable)closed_price change:(SharedDouble * _Nullable)change change_icon:(SharedDouble * _Nullable)change_icon total_quantity:(SharedDouble * _Nullable)total_quantity salable_quantity:(SharedDouble * _Nullable)salable_quantity average_cost:(SharedDouble * _Nullable)average_cost total_cost:(SharedDouble * _Nullable)total_cost close_price:(SharedDouble * _Nullable)close_price unrealized_gain:(SharedDouble * _Nullable)unrealized_gain gain_percent:(SharedDouble * _Nullable)gain_percent cost_value:(SharedDouble * _Nullable)cost_value __attribute__((swift_name("insertAccountInstrumentData(instrumentIndex:long_name:short_name:value_:closed_price:change:change_icon:total_quantity:salable_quantity:average_cost:total_cost:close_price:unrealized_gain:gain_percent:cost_value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountReceivableData")))
@interface SharedAccountReceivableData : SharedBase
- (instancetype)initWithName:(NSString * _Nullable)name company1:(NSString * _Nullable)company1 company2:(NSString * _Nullable)company2 shareQuantity1:(SharedDouble * _Nullable)shareQuantity1 shareQuantity2:(SharedDouble * _Nullable)shareQuantity2 amount1:(SharedDouble * _Nullable)amount1 amount2:(SharedDouble * _Nullable)amount2 __attribute__((swift_name("init(name:company1:company2:shareQuantity1:shareQuantity2:amount1:amount2:)"))) __attribute__((objc_designated_initializer));
- (SharedAccountReceivableData *)doCopyName:(NSString * _Nullable)name company1:(NSString * _Nullable)company1 company2:(NSString * _Nullable)company2 shareQuantity1:(SharedDouble * _Nullable)shareQuantity1 shareQuantity2:(SharedDouble * _Nullable)shareQuantity2 amount1:(SharedDouble * _Nullable)amount1 amount2:(SharedDouble * _Nullable)amount2 __attribute__((swift_name("doCopy(name:company1:company2:shareQuantity1:shareQuantity2:amount1:amount2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amount1 __attribute__((swift_name("amount1")));
@property (readonly) SharedDouble * _Nullable amount2 __attribute__((swift_name("amount2")));
@property (readonly) NSString * _Nullable company1 __attribute__((swift_name("company1")));
@property (readonly) NSString * _Nullable company2 __attribute__((swift_name("company2")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedDouble * _Nullable shareQuantity1 __attribute__((swift_name("shareQuantity1")));
@property (readonly) SharedDouble * _Nullable shareQuantity2 __attribute__((swift_name("shareQuantity2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountReceivableQueries")))
@interface SharedAccountReceivableQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAccountReceivableData __attribute__((swift_name("deleteAccountReceivableData()")));
- (SharedRuntimeQuery<SharedAccountReceivableData *> *)getAccountReceivableByUniqueNameUniqueName:(NSString * _Nullable)uniqueName __attribute__((swift_name("getAccountReceivableByUniqueName(uniqueName:)")));
- (SharedRuntimeQuery<id> *)getAccountReceivableByUniqueNameUniqueName:(NSString * _Nullable)uniqueName mapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable))mapper __attribute__((swift_name("getAccountReceivableByUniqueName(uniqueName:mapper:)")));
- (SharedRuntimeQuery<SharedAccountReceivableData *> *)getAccountReceivableData __attribute__((swift_name("getAccountReceivableData()")));
- (SharedRuntimeQuery<id> *)getAccountReceivableDataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable, SharedDouble * _Nullable))mapper __attribute__((swift_name("getAccountReceivableData(mapper:)")));
- (void)insertAccountReceivableDataName:(NSString * _Nullable)name company1:(NSString * _Nullable)company1 company2:(NSString * _Nullable)company2 shareQuantity1:(SharedDouble * _Nullable)shareQuantity1 shareQuantity2:(SharedDouble * _Nullable)shareQuantity2 amount1:(SharedDouble * _Nullable)amount1 amount2:(SharedDouble * _Nullable)amount2 __attribute__((swift_name("insertAccountReceivableData(name:company1:company2:shareQuantity1:shareQuantity2:amount1:amount2:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountTransactionData")))
@interface SharedAccountTransactionData : SharedBase
- (instancetype)initWithTransferType:(NSString * _Nullable)transferType totalAmount:(SharedDouble * _Nullable)totalAmount description:(NSString * _Nullable)description quantity:(NSString * _Nullable)quantity date:(NSString * _Nullable)date identity:(NSString * _Nullable)identity __attribute__((swift_name("init(transferType:totalAmount:description:quantity:date:identity:)"))) __attribute__((objc_designated_initializer));
- (SharedAccountTransactionData *)doCopyTransferType:(NSString * _Nullable)transferType totalAmount:(SharedDouble * _Nullable)totalAmount description:(NSString * _Nullable)description quantity:(NSString * _Nullable)quantity date:(NSString * _Nullable)date identity:(NSString * _Nullable)identity __attribute__((swift_name("doCopy(transferType:totalAmount:description:quantity:date:identity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable identity __attribute__((swift_name("identity")));
@property (readonly) NSString * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) SharedDouble * _Nullable totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) NSString * _Nullable transferType __attribute__((swift_name("transferType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountTransactionQueries")))
@interface SharedAccountTransactionQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAccountTransactionData __attribute__((swift_name("deleteAccountTransactionData()")));
- (SharedRuntimeQuery<SharedAccountTransactionData *> *)getAccountTransactionByUniqueIdUniqueId:(NSString * _Nullable)uniqueId __attribute__((swift_name("getAccountTransactionByUniqueId(uniqueId:)")));
- (SharedRuntimeQuery<id> *)getAccountTransactionByUniqueIdUniqueId:(NSString * _Nullable)uniqueId mapper:(id (^)(NSString * _Nullable, SharedDouble * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getAccountTransactionByUniqueId(uniqueId:mapper:)")));
- (SharedRuntimeQuery<SharedAccountTransactionData *> *)getAccountTransactionData __attribute__((swift_name("getAccountTransactionData()")));
- (SharedRuntimeQuery<id> *)getAccountTransactionDataMapper:(id (^)(NSString * _Nullable, SharedDouble * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getAccountTransactionData(mapper:)")));
- (void)insertAccountTransactionDataTransferType:(NSString * _Nullable)transferType totalAmount:(SharedDouble * _Nullable)totalAmount description:(NSString * _Nullable)description quantity:(NSString * _Nullable)quantity date:(NSString * _Nullable)date identity:(NSString * _Nullable)identity __attribute__((swift_name("insertAccountTransactionData(transferType:totalAmount:description:quantity:date:identity:)")));
@end

__attribute__((swift_name("CapitaDb")))
@protocol SharedCapitaDb <SharedRuntimeTransacter>
@required
@property (readonly) SharedAccountBalanceQueries *accountBalanceQueries __attribute__((swift_name("accountBalanceQueries")));
@property (readonly) SharedAccountInstrumentQueries *accountInstrumentQueries __attribute__((swift_name("accountInstrumentQueries")));
@property (readonly) SharedAccountReceivableQueries *accountReceivableQueries __attribute__((swift_name("accountReceivableQueries")));
@property (readonly) SharedAccountTransactionQueries *accountTransactionQueries __attribute__((swift_name("accountTransactionQueries")));
@property (readonly) SharedIndexQueries *indexQueries __attribute__((swift_name("indexQueries")));
@property (readonly) SharedInstrumentQueries *instrumentQueries __attribute__((swift_name("instrumentQueries")));
@property (readonly) SharedNewsQueries *newsQueries __attribute__((swift_name("newsQueries")));
@property (readonly) SharedParticipationDataQueries *participationDataQueries __attribute__((swift_name("participationDataQueries")));
@property (readonly) SharedStatusDataQueries *statusDataQueries __attribute__((swift_name("statusDataQueries")));
@property (readonly) SharedVolumnDataQueries *volumnDataQueries __attribute__((swift_name("volumnDataQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapitaDbCompanion")))
@interface SharedCapitaDbCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCapitaDbCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedCapitaDb>)invokeDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<SharedRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IndexData")))
@interface SharedIndexData : SharedBase
- (instancetype)initWithType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("init(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)"))) __attribute__((objc_designated_initializer));
- (SharedIndexData *)doCopyType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("doCopy(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable change __attribute__((swift_name("change")));
@property (readonly) NSString * _Nullable changeDirection __attribute__((swift_name("changeDirection")));
@property (readonly) NSString * _Nullable changePercent __attribute__((swift_name("changePercent")));
@property (readonly) NSString * _Nullable close __attribute__((swift_name("close")));
@property (readonly) NSString * _Nullable high __attribute__((swift_name("high")));
@property (readonly) NSString * _Nullable low __attribute__((swift_name("low")));
@property (readonly) NSString * _Nullable market __attribute__((swift_name("market")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable open_ __attribute__((swift_name("open_")));
@property (readonly) NSString * _Nullable symbol __attribute__((swift_name("symbol")));
@property (readonly) NSString * _Nullable trade __attribute__((swift_name("trade")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value_ __attribute__((swift_name("value_")));
@property (readonly) NSString * _Nullable volume __attribute__((swift_name("volume")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IndexQueries")))
@interface SharedIndexQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteIndexData __attribute__((swift_name("deleteIndexData()")));
- (SharedRuntimeQuery<SharedIndexData *> *)getIndexByUniqueIndexUniqueName:(NSString * _Nullable)uniqueName __attribute__((swift_name("getIndexByUniqueIndex(uniqueName:)")));
- (SharedRuntimeQuery<id> *)getIndexByUniqueIndexUniqueName:(NSString * _Nullable)uniqueName mapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getIndexByUniqueIndex(uniqueName:mapper:)")));
- (SharedRuntimeQuery<SharedIndexData *> *)getIndexData __attribute__((swift_name("getIndexData()")));
- (SharedRuntimeQuery<id> *)getIndexDataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getIndexData(mapper:)")));
- (void)insertIndexDataType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("insertIndexData(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstrumentData")))
@interface SharedInstrumentData : SharedBase
- (instancetype)initWithType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("init(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)"))) __attribute__((objc_designated_initializer));
- (SharedInstrumentData *)doCopyType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("doCopy(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable change __attribute__((swift_name("change")));
@property (readonly) NSString * _Nullable changeDirection __attribute__((swift_name("changeDirection")));
@property (readonly) NSString * _Nullable changePercent __attribute__((swift_name("changePercent")));
@property (readonly) NSString * _Nullable close __attribute__((swift_name("close")));
@property (readonly) NSString * _Nullable high __attribute__((swift_name("high")));
@property (readonly) NSString * _Nullable low __attribute__((swift_name("low")));
@property (readonly) NSString * _Nullable market __attribute__((swift_name("market")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable open_ __attribute__((swift_name("open_")));
@property (readonly) NSString * _Nullable symbol __attribute__((swift_name("symbol")));
@property (readonly) NSString * _Nullable trade __attribute__((swift_name("trade")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value_ __attribute__((swift_name("value_")));
@property (readonly) NSString * _Nullable volume __attribute__((swift_name("volume")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstrumentQueries")))
@interface SharedInstrumentQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteInstrumentData __attribute__((swift_name("deleteInstrumentData()")));
- (SharedRuntimeQuery<SharedIndexData *> *)getInstrumentByUniqueUniqueName:(NSString * _Nullable)uniqueName __attribute__((swift_name("getInstrumentByUnique(uniqueName:)")));
- (SharedRuntimeQuery<id> *)getInstrumentByUniqueUniqueName:(NSString * _Nullable)uniqueName mapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getInstrumentByUnique(uniqueName:mapper:)")));
- (SharedRuntimeQuery<SharedInstrumentData *> *)getInstrumentData __attribute__((swift_name("getInstrumentData()")));
- (SharedRuntimeQuery<id> *)getInstrumentDataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getInstrumentData(mapper:)")));
- (void)insertInstrumentDataType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("insertInstrumentData(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewsData")))
@interface SharedNewsData : SharedBase
- (instancetype)initWithTitle:(NSString * _Nullable)title description:(NSString * _Nullable)description date:(NSString * _Nullable)date __attribute__((swift_name("init(title:description:date:)"))) __attribute__((objc_designated_initializer));
- (SharedNewsData *)doCopyTitle:(NSString * _Nullable)title description:(NSString * _Nullable)description date:(NSString * _Nullable)date __attribute__((swift_name("doCopy(title:description:date:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewsQueries")))
@interface SharedNewsQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteNewsData __attribute__((swift_name("deleteNewsData()")));
- (SharedRuntimeQuery<SharedNewsData *> *)getNewsData __attribute__((swift_name("getNewsData()")));
- (SharedRuntimeQuery<id> *)getNewsDataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getNewsData(mapper:)")));
- (SharedRuntimeQuery<SharedNewsData *> *)getUniqueNewsUniqueTitle:(NSString * _Nullable)uniqueTitle __attribute__((swift_name("getUniqueNews(uniqueTitle:)")));
- (SharedRuntimeQuery<id> *)getUniqueNewsUniqueTitle:(NSString * _Nullable)uniqueTitle mapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getUniqueNews(uniqueTitle:mapper:)")));
- (void)insertNewsDataTitle:(NSString * _Nullable)title description:(NSString * _Nullable)description date:(NSString * _Nullable)date __attribute__((swift_name("insertNewsData(title:description:date:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipationData")))
@interface SharedParticipationData : SharedBase
- (instancetype)initWithType:(NSString * _Nullable)type issuesAdvanced:(NSString * _Nullable)issuesAdvanced issuesDeclined:(NSString * _Nullable)issuesDeclined issuesUnchanged:(NSString * _Nullable)issuesUnchanged market:(NSString * _Nullable)market __attribute__((swift_name("init(type:issuesAdvanced:issuesDeclined:issuesUnchanged:market:)"))) __attribute__((objc_designated_initializer));
- (SharedParticipationData *)doCopyType:(NSString * _Nullable)type issuesAdvanced:(NSString * _Nullable)issuesAdvanced issuesDeclined:(NSString * _Nullable)issuesDeclined issuesUnchanged:(NSString * _Nullable)issuesUnchanged market:(NSString * _Nullable)market __attribute__((swift_name("doCopy(type:issuesAdvanced:issuesDeclined:issuesUnchanged:market:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable issuesAdvanced __attribute__((swift_name("issuesAdvanced")));
@property (readonly) NSString * _Nullable issuesDeclined __attribute__((swift_name("issuesDeclined")));
@property (readonly) NSString * _Nullable issuesUnchanged __attribute__((swift_name("issuesUnchanged")));
@property (readonly) NSString * _Nullable market __attribute__((swift_name("market")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipationDataQueries")))
@interface SharedParticipationDataQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteParticipationData __attribute__((swift_name("deleteParticipationData()")));
- (SharedRuntimeQuery<SharedParticipationData *> *)getParticipationByUniqueUniqueMarket:(NSString * _Nullable)uniqueMarket __attribute__((swift_name("getParticipationByUnique(uniqueMarket:)")));
- (SharedRuntimeQuery<id> *)getParticipationByUniqueUniqueMarket:(NSString * _Nullable)uniqueMarket mapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getParticipationByUnique(uniqueMarket:mapper:)")));
- (SharedRuntimeQuery<SharedParticipationData *> *)getParticipationData __attribute__((swift_name("getParticipationData()")));
- (SharedRuntimeQuery<id> *)getParticipationDataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getParticipationData(mapper:)")));
- (void)insertParticipationDataType:(NSString * _Nullable)type issuesAdvanced:(NSString * _Nullable)issuesAdvanced issuesDeclined:(NSString * _Nullable)issuesDeclined issuesUnchanged:(NSString * _Nullable)issuesUnchanged market:(NSString * _Nullable)market __attribute__((swift_name("insertParticipationData(type:issuesAdvanced:issuesDeclined:issuesUnchanged:market:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusData")))
@interface SharedStatusData : SharedBase
- (instancetype)initWithType:(NSString * _Nullable)type market:(NSString * _Nullable)market status:(NSString * _Nullable)status updatedata:(NSString * _Nullable)updatedata __attribute__((swift_name("init(type:market:status:updatedata:)"))) __attribute__((objc_designated_initializer));
- (SharedStatusData *)doCopyType:(NSString * _Nullable)type market:(NSString * _Nullable)market status:(NSString * _Nullable)status updatedata:(NSString * _Nullable)updatedata __attribute__((swift_name("doCopy(type:market:status:updatedata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable market __attribute__((swift_name("market")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedata __attribute__((swift_name("updatedata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusDataQueries")))
@interface SharedStatusDataQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteStatusData __attribute__((swift_name("deleteStatusData()")));
- (SharedRuntimeQuery<SharedStatusData *> *)getStatusByUniqueUniqueMarket:(NSString * _Nullable)uniqueMarket __attribute__((swift_name("getStatusByUnique(uniqueMarket:)")));
- (SharedRuntimeQuery<id> *)getStatusByUniqueUniqueMarket:(NSString * _Nullable)uniqueMarket mapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getStatusByUnique(uniqueMarket:mapper:)")));
- (SharedRuntimeQuery<SharedStatusData *> *)getStatusData __attribute__((swift_name("getStatusData()")));
- (SharedRuntimeQuery<id> *)getStatusDataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getStatusData(mapper:)")));
- (void)insertStatusDataType:(NSString * _Nullable)type market:(NSString * _Nullable)market status:(NSString * _Nullable)status updatedata:(NSString * _Nullable)updatedata __attribute__((swift_name("insertStatusData(type:market:status:updatedata:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VolumnData")))
@interface SharedVolumnData : SharedBase
- (instancetype)initWithType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("init(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)"))) __attribute__((objc_designated_initializer));
- (SharedVolumnData *)doCopyType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("doCopy(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable change __attribute__((swift_name("change")));
@property (readonly) NSString * _Nullable changeDirection __attribute__((swift_name("changeDirection")));
@property (readonly) NSString * _Nullable changePercent __attribute__((swift_name("changePercent")));
@property (readonly) NSString * _Nullable close __attribute__((swift_name("close")));
@property (readonly) NSString * _Nullable high __attribute__((swift_name("high")));
@property (readonly) NSString * _Nullable low __attribute__((swift_name("low")));
@property (readonly) NSString * _Nullable market __attribute__((swift_name("market")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable open_ __attribute__((swift_name("open_")));
@property (readonly) NSString * _Nullable symbol __attribute__((swift_name("symbol")));
@property (readonly) NSString * _Nullable trade __attribute__((swift_name("trade")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value_ __attribute__((swift_name("value_")));
@property (readonly) NSString * _Nullable volume __attribute__((swift_name("volume")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VolumnDataQueries")))
@interface SharedVolumnDataQueries : SharedRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteTradeVolumnData __attribute__((swift_name("deleteTradeVolumnData()")));
- (SharedRuntimeQuery<SharedVolumnData *> *)getTradeVolumnData __attribute__((swift_name("getTradeVolumnData()")));
- (SharedRuntimeQuery<id> *)getTradeVolumnDataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getTradeVolumnData(mapper:)")));
- (SharedRuntimeQuery<SharedVolumnData *> *)getVolumnDataByUniqueUniqueMarket:(NSString * _Nullable)uniqueMarket __attribute__((swift_name("getVolumnDataByUnique(uniqueMarket:)")));
- (SharedRuntimeQuery<id> *)getVolumnDataByUniqueUniqueMarket:(NSString * _Nullable)uniqueMarket mapper:(id (^)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getVolumnDataByUnique(uniqueMarket:mapper:)")));
- (void)insertTradeVolumnDataType:(NSString * _Nullable)type market:(NSString * _Nullable)market symbol:(NSString * _Nullable)symbol name:(NSString * _Nullable)name open_:(NSString * _Nullable)open_ high:(NSString * _Nullable)high low:(NSString * _Nullable)low close:(NSString * _Nullable)close volume:(NSString * _Nullable)volume value_:(NSString * _Nullable)value_ trade:(NSString * _Nullable)trade change:(NSString * _Nullable)change changePercent:(NSString * _Nullable)changePercent changeDirection:(NSString * _Nullable)changeDirection __attribute__((swift_name("insertTradeVolumnData(type:market:symbol:name:open_:high:low:close:volume:value_:trade:change:changePercent:changeDirection:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface SharedDatabaseDriverFactory : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol SharedRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol SharedRuntimeSqlDriver <SharedRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(SharedKotlinArray<NSString *> *)queryKeys listener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));
- (SharedRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (id<SharedRuntimeQueryResult>)executeIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<SharedRuntimeQueryResult>)executeQueryIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<SharedRuntimeQueryResult> (^)(id<SharedRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));
- (id<SharedRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(SharedKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(SharedKotlinArray<NSString *> *)queryKeys listener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol SharedRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface SharedRuntimeTransacterTransaction : SharedBase <SharedRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<SharedRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol SharedRuntimeTransactionWithoutReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol SharedRuntimeTransactionWithReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface SharedRuntimeExecutableQuery<__covariant RowType> : SharedBase
- (instancetype)initWithMapper:(RowType (^)(id<SharedRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (id<SharedRuntimeQueryResult>)executeMapper:(id<SharedRuntimeQueryResult> (^)(id<SharedRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<SharedRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface SharedRuntimeQuery<__covariant RowType> : SharedRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<SharedRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("RuntimeSqlSchema")))
@protocol SharedRuntimeSqlSchema
@required
- (id<SharedRuntimeQueryResult>)createDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (id<SharedRuntimeQueryResult>)migrateDriver:(id<SharedRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(SharedKotlinArray<SharedRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol SharedRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("RuntimeQueryResult")))
@protocol SharedRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol SharedRuntimeSqlPreparedStatement
@required
- (void)bindBooleanIndex:(int32_t)index boolean:(SharedBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));
- (void)bindBytesIndex:(int32_t)index bytes:(SharedKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(SharedDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(SharedLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol SharedRuntimeSqlCursor
@required
- (SharedBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (SharedKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SharedDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SharedLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (id<SharedRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface SharedRuntimeAfterVersion : SharedBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<SharedRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<SharedRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
