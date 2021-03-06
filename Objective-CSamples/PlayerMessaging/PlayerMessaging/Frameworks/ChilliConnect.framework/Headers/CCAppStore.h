//
//  This file was auto-generated using the ChilliConnect SDK Generator.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 Tag Games Ltd
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

@import Foundation;

#import "ForwardDeclarations.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 Contains detailed information about the response from the AppStore verification
 service.

 This is immutable after construction and is therefore thread safe.
 */
@interface CCAppStore : NSObject

/// The status code sent back from the AppStore verification service as described in
/// the Apple Documentation at
/// 'https://developer.apple.com/library/ios/releasenotes/General/ValidateAppStoreReceipt/Chapters/ValidateRemotely.html'.
@property (readonly) int32_t responseCode;
	
/// A textual description of the returned status code.
@property (readonly) NSString *responseMessage;
	
/// The full response from the AppStore verification service as a JSON encoded
/// string. See the Apple Documentation at
/// 'https://developer.apple.com/library/ios/releasenotes/General/ValidateAppStoreReceipt/Chapters/ReceiptFields.html'
/// for more information.
@property (readonly) NSString *receiptData;

/*!
 A convenience factory method for creating new instances of CCAppStore
 with the given properties.
 
 @param responseCode The status code sent back from the AppStore verification service as described in
        the Apple Documentation at	
        'https://developer.apple.com/library/ios/releasenotes/General/ValidateAppStoreReceipt/Chapters/ValidateRemotely.html'.	
 @param responseMessage A textual description of the returned status code.
 @param receiptData The full response from the AppStore verification service as a JSON encoded
        string. See the Apple Documentation at	
        'https://developer.apple.com/library/ios/releasenotes/General/ValidateAppStoreReceipt/Chapters/ReceiptFields.html'	
        for more information.	

 @return The new instance.
 */
+ (instancetype)appStoreWithResponseCode:(int32_t)responseCode responseMessage:(NSString *)responseMessage receiptData:(NSString *)receiptData;

/*!
 Convenience factory method for creating new instances of CCAppStore
 from the contents of the given Json dictionary.
 
 @param dictionary The properties of the object in dictionary form. Typically this
        is created from Json.
 
 @return The new instance.
 */
+ (instancetype)appStoreWithJson:(NSDictionary *)dictionary;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given properties.
 
 @param responseCode The status code sent back from the AppStore verification service as described in
        the Apple Documentation at	
        'https://developer.apple.com/library/ios/releasenotes/General/ValidateAppStoreReceipt/Chapters/ValidateRemotely.html'.	
 @param responseMessage A textual description of the returned status code.
 @param receiptData The full response from the AppStore verification service as a JSON encoded
        string. See the Apple Documentation at	
        'https://developer.apple.com/library/ios/releasenotes/General/ValidateAppStoreReceipt/Chapters/ReceiptFields.html'	
        for more information.	

 @return The initialised object.
 */
- (instancetype)initWithResponseCode:(int32_t)responseCode responseMessage:(NSString *)responseMessage receiptData:(NSString *)receiptData NS_DESIGNATED_INITIALIZER;

/*!
 Initialise with the contents of the given dictionary.
 
 @param dictionary The properties of the object in dictionary form. Typically this
        is created from Json.
 
 @return The initialised object.
 */
- (instancetype)initWithDictionary:(NSDictionary *)dictionary NS_DESIGNATED_INITIALIZER;

/*!
 Serialises all properties. The output will be a dictionary containing the objects 
 properties in a form that can easily be converted to Json. 
 
 @return The serialised object in dictionary form. 
 */
 - (NSDictionary *)serialise;
 
@end

NS_ASSUME_NONNULL_END
