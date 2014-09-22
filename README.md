<h1>Shoot</h1>
=====

A library helps students visualize their tree structure easily<br>

-----

<h3>Pruopse</h3>
<p>
  Are you doing some assignment about tree structure from class, and don't know how to represents your tree structure in an elegent way?<br>
  Shoot can help you! Shoot is a library which can automatically build a tree structure with your web browser.<br>
</p>

<h3>How does it looks like?</h3>
<p>
  It drew like this:<br>
  <img src="https://i.imgur.com/H2JOKLj.png"/><br>
  If you know about CSS, you can change style by yourself.<br>
</p>
  
<h3>How to add this feature into my project?</h3>
<p>
  1. Clone files from shoot/Packing to your project.<br>
  2. Include "shoot.h" in your .cpp file.<br>
  3. Inherit your tree node class from shoot::TreeNode<br>
  4. Implements some functions in your tree node class.<br>
      YourTreeNode *sibling() : no argument, return the pointer of this node's next sibling. If there is no next sibling you can return NULL instead.<br>
      YourTreeNode *child()   : no argument, return the pointer of this node's first child. If it don't have any child you can return NULL instead.<br>
      bool hasSibling()   : no argument, return a boolean that if this node has next sibling. If it is the last sibling in this generation, return false. Otherwise, return true.<br>
      bool hasSibling()   : no argument, return a boolean that if this node has any child. If it is the leaf node, return false. Else cases, return true.<br>
      string getData()    : no argument, return the data contained in this node in string type.<br>
  5. Call the YourTreeNode->generate(filename) whenever you wanna produce a tree view.<br>
  6. Compile your project with "shoot.o"<br>
  7. Execute your outcome program.<br>
  
  Notify:<br>
    1. The file "shoot.hd", shall be placed under the same folder as your executable program is.<br>
    2. When you open the html file produced by "generate()", it needs internet connection.<br>
        If you wanna make it work without connection. You need to download jquery from "http://jquery.com/download/" and put it under the same folder as "shoot.hd" is.<br>
        And change the js link address at the first line in "shoot.hd"<br>
</p>

<h3>Example</h3>
<p>
There is an example at <a href="https://github.com/ire7715/shoot/blob/master/Example/example.cpp">"shoot/Example/example.cpp"</a>. Implements a simple pairingHeap.<br>
</p>
