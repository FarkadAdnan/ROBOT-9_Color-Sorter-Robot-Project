# ROBOT-9_Color-Sorter-Robot-Project
Chapter 2 code_Project_9 The Third Part 3 of "The Arduino World Book" code_Project_9 ROBOT-9_Color Sorter Robot Project

- code_Project_9

-  By:Farkad Adnan فرقد عدنان -
- https://linktr.ee/farkadadnan

 - E-mail: farkad.hpfa95@gmail.com 
- inst : farkadadnan 
- #farkadadnan , #farkad_adnan , فرقد عدنان# 
- FaceBook: كتاب عالم الاردوينو 
- inst : arduinobook
1. #كتاب_عالم_الاردوينو
2. #كتاب_عالم_الآردوينو 

* facebook : https://www.facebook.com/profile.php?id=100002145048612
* instagram:  https://www.instagram.com/farkadadnan/
* linkedin : https://www.linkedin.com/in/farkad-adnan-499972121/

 <p>
 <a href='https://mobile.twitter.com/farkadadnan'>
        <img alt="Twitter Follow" src="https://img.shields.io/twitter/follow/farkadadnan?label=%40farkadadnan&style=social" alt='Twitter' align="center"/>
    </a>
</p>

# تصميم الثلاثي الابعاد
- https://thangs.com/mythangs/file/309206
 ![1](https://user-images.githubusercontent.com/35774039/187932405-41718256-21ee-4ef9-8931-0b3947c71b52.PNG)
![2](https://user-images.githubusercontent.com/35774039/187932408-ae5f80cf-6cca-4407-88e6-446887ccb551.PNG)
![3](https://user-images.githubusercontent.com/35774039/187932410-d200f84b-4afa-456c-921d-ef36a7649031.PNG)



# هيكل العام للتصميم
![Dessins de projet de robot trieur de couleurs-@farkadadnan](https://user-images.githubusercontent.com/35774039/187932493-7b48e46b-1be6-4c5f-8068-2089eb674d3e.jpg)



# اجزاء المشروع 
![111](https://user-images.githubusercontent.com/35774039/187932565-78f084ee-b825-41d6-822e-904718cbe5f1.PNG)

# النتائج

![Color sorter machine - by HowToMechatronics](https://user-images.githubusercontent.com/35774039/187932624-f223d2af-8001-4dc9-8924-664a53312d8d.jpg)



# التصميم العام للقاعدة 
![9](https://user-images.githubusercontent.com/35774039/187932707-025ba059-5b07-4dca-909b-d6f583214d37.PNG)

بعد ذلك ، باستخدام حلقة "for" ، سندير ونجلب البكرة إلى موضع مستشعر اللون. نحن نستخدم حلقة "for" حتى نتمكن من التحكم في سرعة الدوران عن طريق تغيير وقت التأخير في الحلقة.

بعد ذلك ، بعد نصف ثانية من التأخير ، وباستخدام الوظيفة المخصصة ، readColor () ، سنقرأ لون اللوح. إليك رمز الوظيفة المخصصة. باستخدام منافذ التحكم الأربعة ودبوس خرج التردد لمستشعر اللون ، نقرأ لون لعبة الورق. يقرأ المستشعر 3 قيم مختلفة لكل لوح ، أحمر وأخضر وأزرق ووفقًا لهذه القيم نخبرك ما هو اللون الفعلي. لمزيد من التفاصيل حول كيفية عمل مستشعر الألوان TCS3200 ، يمكنك التحقق من البرنامج التعليمي المفصل السابق حول هذا الموضوع.

فيما يلي قيم RGB التي حصلت عليها من المستشعر لكل لعبة. لاحظ أن هذه القيم يمكن أن تختلف لأن المستشعرات ليست دقيقة دائمًا. لذلك ، باستخدام عبارات "if" هذه ، نسمح للحساس بخطأ يقارب + -5 من القيمة المختبرة للون المعين. لذلك على سبيل المثال ، إذا كان لدينا لعبة Skittle باللون الأحمر ، فستكون عبارة "if" الأولى صحيحة وسيحصل المتغير "color" على القيمة 1. وهذا ما تفعله الوظيفة المخصصة readColor () وبعد ذلك باستخدام "switch-case" "البيان نقوم بتدوير المؤازرة السفلية إلى الموضع المعين. في النهاية ، نقوم بتدوير محرك مؤازر علوي بشكل أكبر حتى يسقط القاطع في سكة التوجيه ونعيد إرساله مرة أخرى إلى الموضع الأولي حتى يمكن تكرار العملية.
 
