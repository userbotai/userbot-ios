//
//  UserbotLib.h
//  UserbotLib
//
//  Created by Antonio Giarrusso on 07/06/17.
//  Copyright © 2017 HummingBird. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Userbot : NSObject



//Stringa univoca per l'utente (opzionale, richiede anche setUserName)
@property (class) NSString *UserID;


//Nome utente o nickname (opzionale, richiede anche setUserID)
@property (class) NSString *UserName;


//Email dell'utente (opzionale)
@property (class) NSString *UserEmail;


//La key dell'account (opzionale)
@property (class) NSString *UserPhone;


//Url dell'immagine del profilo dell'utente (opzionale)
@property (class) NSString *ProfilePic;


//Apri la chat di Userbot con la key dell'account (obbligatoria)
+(void)OpenChatWithKey:(NSString *)keyAccount;

@end
